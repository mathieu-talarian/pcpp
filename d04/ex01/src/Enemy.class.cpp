/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 23:45:19 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/06 13:19:38 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.class.hpp"

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type) {}
Enemy::Enemy(Enemy const &cpy) { *this = cpy; }
Enemy &Enemy::operator=(Enemy const &cpy) {
  if (this != &cpy) {
    this->setHP(cpy.getHP());
    this->setType(cpy.getType());
  }
  return *this;
}
Enemy::~Enemy(void) {}

int Enemy::getHP(void) const { return this->_hp; }
std::string const &Enemy::getType(void) const { return this->_type; }

void Enemy::setHP(int hp) { this->_hp = hp; }
void Enemy::setType(std::string type) { this->_type = type; }

void Enemy::takeDamage(int damage) {
  if (this->_hp > 0 && damage > 0) {
    if (this->_hp - damage <= 0)
      this->_hp = 0;
    else
      this->_hp -= damage;
  }
}