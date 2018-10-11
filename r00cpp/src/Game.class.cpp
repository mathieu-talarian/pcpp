/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:51:36 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/07 23:37:14 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.class.hpp"
#include "Bullet.class.hpp"
#include "ft_ncurses.hpp"

#define SPAWN 10
#define BS 1
#define BULLETS 20
#define ENEMIES 20

Game::Game(Vector size) : _w_size(size) {
  this->_ship = new Ship(Vector(2, this->_w_size.getY() / 2), '>');
  this->_entities = new AEntity *[ENEMIES];
  this->_allies = new AEntity *[BULLETS];
  for (int i = 0; i < ENEMIES; i++) {
    this->_entities[i] = new Enemy(Vector(0, 0));
  }
  for (int i = 0; i < BULLETS; i++) {
    this->_allies[i] = new Bullet(Vector(0, 0), 1);
  }
}

Game::Game(Game const &cpy) : _ship(cpy._ship) { *this = cpy; }

Game &Game::operator=(Game const &cpy) {
  if (this != &cpy) {
    this->_w_size = cpy._w_size;
    this->_ship = cpy._ship;
    this->_entities = cpy._entities;
    this->_allies = cpy._allies;
  }

  return *this;
}

Game::~Game() {
  for (int i = 0; i < BULLETS; i++) {
    delete this->_allies[i];
  }
  for (int i = 0; i < ENEMIES; i++) {
    delete this->_entities[i];
  }
  delete[] this->_entities;
  delete[] this->_allies;
  delete this->_ship;
}

void Game::_drawBox() {
  WINDOW *boite;
  boite = subwin(stdscr, 10, 10, LINES / 2, COLS / 2);
  box(boite, ACS_VLINE, ACS_HLINE);
  attroff(COLOR_PAIR(1));
}

void Game::_move_enemies(long time) {
  for (int i = 0; i < ENEMIES; i++) {
    if (this->_entities[i]->getLife() == 1) {
      this->_entities[i]->moveMe(time);
    }
  }
}

void Game::_move_allies(long time) {
  for (int i = 0; i < BULLETS; i++) {
    if (this->_allies[i]->getLife() == 1) {
      this->_allies[i]->moveMe(time);
    }
  }
}

void Game::_checkForDelete() {
  for (int i = 0; i < BULLETS; i++) {
    if (this->_allies[i]->getLife() == 1) {
      this->_allies[i]->toBeDeleted(this->_w_size.getX())
          ? this->_allies[i]->setLife(0)
          : this->_allies[i]->setLife(1);
    }
  }
  for (int i = 0; i < ENEMIES; i++) {
    if (this->_entities[i]->getLife() == 1) {
      this->_entities[i]->toBeDeleted(0) ? this->_entities[i]->setLife(0)
                                         : this->_entities[i]->setLife(1);
    }
  }
}

void Game::_check_collisions() {
  for (int j = 0; j < ENEMIES; j++) {
    for (int i = 0; i < BULLETS; i++) {
      ((Bullet *)(this->_allies[i]))->collide(this->_entities[j]);
      this->getShip().collide(this->_entities[j]);
    }
  }
}

void Game::_new_Bullet(Vector pos, int y) {
  for (int i = 0; i < BULLETS; i++) {
    if (this->_allies[i]->getLife() == 0) {
      this->_allies[i]->activate(pos, y);
      return;
    }
  }
}

void Game::_new_Enemy(Vector pos, int y) {
  for (int i = 0; i < ENEMIES; i++) {
    if (this->_entities[i]->getLife() == 0) {
      this->_entities[i]->activate(pos, y);
      return;
    }
  }
}

void Game::turn(long time) {
  this->_checkForDelete();
  this->_check_collisions();
  if (time % BS == 0) {
    Vector v(this->getShip().getPos());
    v.setX(v.getX() + 1);
    this->_new_Bullet(v, 1);
  }

  if (time % SPAWN == 0) {
    Vector v(this->_w_size.getX() - 2, rand() % this->_w_size.getY());
    this->_new_Enemy(v, 1);
  }
  this->_move_enemies(time);
  this->_move_allies(time);
}

void Game::render() {
  this->printLives();
  this->_ship->draw();
  for (int i = 0; i < BULLETS; i++) {
    this->_allies[i]->draw();
  }
  for (int i = 0; i < ENEMIES; i++) {
    this->_entities[i]->draw();
  }
}

Ship &Game::getShip() { return *this->_ship; }

void Game::printLives() {
  std::string i = "";
  for (int y = 0; y < this->getShip().getLife(); y++) {
    i.append("<3 ");
  }
  i.append(" Life");
  i.append(((this->getShip().getLife() > 1) ? "s" : ""));
  i.append(" !!");
  printw(i.c_str());
}
