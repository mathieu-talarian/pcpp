/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AEntity.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 22:43:37 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/07 23:35:46 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AEntity.class.hpp"

AEntity::AEntity(Vector pos, char v) : _pos(pos), _v(v), _life(0) {}

AEntity::AEntity(AEntity const &cpy) { *this = cpy; }

AEntity &AEntity::operator=(AEntity const &cpy) {
  if (this != &cpy) {
    this->_pos = cpy._pos;
    this->_v = cpy._v;
  }
  return *this;
}

AEntity::~AEntity() {}

void AEntity::moveLeft() { this->_pos.setX(this->_pos.getX() - 1); }
void AEntity::moveRight() { this->_pos.setX(this->_pos.getX() + 1); }
void AEntity::moveUp() { this->_pos.setY(this->_pos.getY() - 1); }
void AEntity::moveDown() { this->_pos.setY(this->_pos.getY() + 1); }

void AEntity::setC(char v) { this->_v = v; }
char AEntity::getC(void) const { return this->_v; }

void AEntity::setLife(int l) { this->_life = l; }
int AEntity::getLife(void) const { return this->_life; }

Vector &AEntity::getPos(void) { return this->_pos; }
