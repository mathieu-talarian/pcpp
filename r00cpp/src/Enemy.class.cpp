/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 11:44:24 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/07 23:29:17 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.class.hpp"
#include "ft_ncurses.hpp"

#define SPEED 2

Enemy::Enemy(Vector pos) : AEntity(pos, 0) {
  this->_speed = SPEED; // rand() % 3 + SPEED;
  this->setC(Enemy::_e[rand() % Enemy::_el]);
}
Enemy::Enemy(Enemy const &cpy) : AEntity(cpy) { *this = cpy; }

Enemy::~Enemy() {}

void Enemy::draw() {
  if (this->getLife() == 1) {
    attron(COLOR_PAIR(3));
    mvaddch(this->_pos.getY(), this->_pos.getX(), this->getC());
    attroff(COLOR_PAIR(3));
  }
}

void Enemy::moveMe(long time) {
  if (time % this->_speed == 0) {
    Enemy::_mv < 0 ? this->moveLeft() : this->moveRight();
  };
}

bool Enemy::toBeDeleted(int x) { return this->_pos.getX() - 1 <= x; }

const char Enemy::_e[] = {'x', '#', '*', 'V', '+', '@'};
const int Enemy::_el = 6;

void Enemy::activate(Vector pos, int i) {
  this->setLife(1);
  this->_pos = pos;
  i = 0;
}