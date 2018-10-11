/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:12:00 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/07 20:03:26 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vector.class.hpp"

Vector::Vector() : _x(0), _y(0) {}

Vector::Vector(int x, int y) : _x(x), _y(y) {}

Vector::Vector(Vector const &cpy) { *this = cpy; }

Vector &Vector::operator=(Vector const &cpy) {
  if (this != &cpy) {
    this->setX(cpy.getX());
    this->setY(cpy.getY());
  }
  return *this;
}

bool Vector::operator==(Vector const &cpy) {
  return this->_x == cpy.getX() && this->_y == cpy.getY();
}

void Vector::setX(int x) { this->_x = x; }
void Vector::setY(int y) { this->_y = y; }

int Vector::getX(void) const { return this->_x; }
int Vector::getY(void) const { return this->_y; }

Vector::~Vector() {}