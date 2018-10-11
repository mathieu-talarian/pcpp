/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:52:26 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/07 23:39:13 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ship.class.hpp"
#include <curses.h>
#include <ncurses.h>

Ship::Ship(Vector pos, char v) : AEntity(pos, v) {
  this->setLife(3);
  this->_pos1 = Vector(this->getPos().getX() - 1, this->getPos().getY() - 1);
  this->_pos2 = Vector(this->getPos().getX() - 1, this->getPos().getY() + 1);
}
Ship::Ship(Ship const &cpy) : AEntity(cpy) { *this = cpy; }
Ship &Ship::operator=(Ship const &cpy) {
  if (this != &cpy) {
  }
  return *this;
}
Ship::~Ship() {}

void Ship::draw() {
  mvaddch(this->_pos1.getY(), this->_pos1.getX(), this->getC());
  mvaddch(this->getPos().getY(), this->getPos().getX(), this->getC());
  mvaddch(this->_pos2.getY(), this->_pos2.getX(), this->getC());
}

void Ship::moveMe(long) {}

bool Ship::toBeDeleted(int i) { return i - i; }

void Ship::Action(int const &keyPressed, Vector const &wSize) {
  if (keyPressed == KEY_UP && (this->getPos().getY() - 1) > 0) {
    this->moveUp();
    this->WmoveUp();
  }

  if (keyPressed == KEY_DOWN && (this->getPos().getY() + 1) < wSize.getY()) {
    this->moveDown();
    this->WmoveDown();
  }
  if (keyPressed == KEY_LEFT && (this->getPos().getX() - 1) > 0) {
    this->moveLeft();
    this->WmoveLeft();
  }

  if (keyPressed == KEY_RIGHT && (this->getPos().getX() + 1) < wSize.getX()) {
    this->moveRight();
    this->WmoveRight();
  }
}

void Ship::WmoveLeft() {
  this->_pos1.setX(this->_pos1.getX() - 1);
  this->_pos2.setX(this->_pos2.getX() - 1);
}
void Ship::WmoveRight() {
  this->_pos1.setX(this->_pos1.getX() + 1);
  this->_pos2.setX(this->_pos2.getX() + 1);
}
void Ship::WmoveUp() {
  this->_pos1.setY(this->_pos1.getY() - 1);
  this->_pos2.setY(this->_pos2.getY() - 1);
}
void Ship::WmoveDown() {
  this->_pos1.setY(this->_pos1.getY() + 1);
  this->_pos2.setY(this->_pos2.getY() + 1);
}

void Ship::activate(Vector pos, int i) {
  i = 0;
  (void)pos;
}

void Ship::collide(AEntity *e) {
  if ((this->getPos() == e->getPos() || this->_pos1 == e->getPos() ||
      this->_pos2 == e->getPos()) && e->getLife()) {
    e->setLife(0);
    if ((this->getLife() - 1) == 0) {
      this->setLife(0);
      // gameover
    } else {
        this->setLife(this->getLife() - 1);
    }
  }
}
