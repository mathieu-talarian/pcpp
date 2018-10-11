/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 19:30:31 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/07 23:28:41 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bullet.class.hpp"
#include "ft_ncurses.hpp"
#include "stdlib.h"

#define SPEED 1

Bullet::Bullet(Vector pos, int mv) : ABullet(pos, Bullet::_v), _mv(mv) {}
Bullet::Bullet(Bullet const &cpy) : ABullet(cpy) { *this = cpy; }
Bullet &Bullet::operator=(Bullet const &cpy) {
  if (this != &cpy) {
    // this->_pos = cpy.getPos();
    this->_v = cpy._v;
    this->_mv = cpy._mv;
  }
  return *this;
}
Bullet::~Bullet() {}

void Bullet::draw() {
  if (this->getLife() == 1) {
    attron(COLOR_PAIR(4));
    mvaddch(this->_pos.getY(), this->_pos.getX(), this->getC());
    attroff(COLOR_PAIR(4));
  }
}

void Bullet::activate(Vector pos, int i) {
  this->setLife(1);
  this->_pos = pos;
  this->_mv = i;
}

void Bullet::moveMe(long time) {
  if (time % SPEED == 0) {
    Bullet::_mv < 0 ? this->moveLeft() : this->moveRight();
  };
}

void Bullet::collide(AEntity *e) {
  if (this->_pos.getX() == e->getPos().getX()) {
    if (this->_pos.getY() == e->getPos().getY()) {
      this->setLife(0);
      e->setLife(0);
    }
  }
}

bool Bullet::toBeDeleted(int x) { return this->_pos.getX() + 1 >= x; }
char Bullet::_v = '-';