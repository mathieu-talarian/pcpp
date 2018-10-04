/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 02:21:45 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/04 03:33:09 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed() : _raw(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const raw) {
  std::cout << "Int constructor called" << std::endl;
  setRawBits(raw << _bit);
}

Fixed::Fixed(float const raw) {
  std::cout << "Float constructor called" << std::endl;
  setRawBits(roundf(raw * (1 << _bit)));
}

Fixed::Fixed(Fixed const &src) {
  std::cout << "Copy constructor called" << std::endl;
  *this = src;
}

Fixed &Fixed::operator=(Fixed const &rhs) {
  std::cout << "Assignation operator called" << std::endl;
  if (this != &rhs)
    this->_raw = rhs.getRawBits();
  return *this;
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

int Fixed::getRawBits(void) const { return this->_raw; }

void Fixed::setRawBits(int const raw) { this->_raw = raw; }

float Fixed::toFloat(void) const {
  float n = this->getRawBits();
  return (n / (1 << this->_bit));
}

int Fixed::toInt(void) const { return (this->getRawBits() >> this->_bit); }

int const Fixed::_bit = 8;

std::ostream &operator<<(std::ostream &o, Fixed const &rhs) {
  o << rhs.toFloat();
  return o;
}