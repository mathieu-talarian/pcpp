/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 02:21:45 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/04 16:21:54 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

// Contructors
Fixed::Fixed() : _raw(0) {}

Fixed::Fixed(int const raw) { setRawBits(raw << _bit); }

Fixed::Fixed(float const raw) { setRawBits(roundf(raw * (1 << _bit))); }

Fixed::Fixed(Fixed const &src) { *this = src; }

// Operators
bool Fixed::operator>(Fixed const &r) { return this->_raw > r.getRawBits(); }
bool Fixed::operator<(Fixed const &r) { return this->_raw < r.getRawBits(); }
bool Fixed::operator>=(Fixed const &r) { return this->_raw >= r.getRawBits(); }
bool Fixed::operator<=(Fixed const &r) { return this->_raw <= r.getRawBits(); }
bool Fixed::operator==(Fixed const &r) { return this->_raw == r.getRawBits(); }
bool Fixed::operator!=(Fixed const &r) { return this->_raw != r.getRawBits(); }

Fixed &Fixed::operator=(Fixed const &rhs) {
  if (this != &rhs)
    this->_raw = rhs.getRawBits();
  return *this;
}

Fixed Fixed::operator+(Fixed const &r) {
  Fixed ret;
  ret.setRawBits(this->_raw + r.getRawBits());
  return ret;
}

Fixed Fixed::operator-(Fixed const &r) {
  Fixed ret;
  ret.setRawBits(this->_raw - r.getRawBits());
  return ret;
}

Fixed Fixed::operator*(Fixed const &r) {
  Fixed ret;
  ret._raw = (this->_raw * r.getRawBits()) >> this->_bit;
  return ret;
}

Fixed Fixed::operator/(Fixed const &r) {
  Fixed ret;
  ret._raw = (this->_raw << this->_bit) / r.getRawBits();
  return (ret);
}

Fixed &Fixed::operator++(void) {
  this->_raw++;
  return (*this);
}

Fixed Fixed::operator++(int) {
  Fixed ret = (*this);
  this->_raw++;
  // this++;
  return (ret);
}

Fixed &Fixed::operator--(void) {
  this->_raw--;
  return (*this);
}

Fixed Fixed::operator--(int) {
  Fixed ret = (*this);
  this->_raw--;
  // this--;
  return (ret);
}

// Destructor
Fixed::~Fixed() {}

// Member Functions
int Fixed::getRawBits(void) const { return this->_raw; }

void Fixed::setRawBits(int const raw) { this->_raw = raw; }

float Fixed::toFloat(void) const {
  float n = this->getRawBits();
  return (n / (1 << this->_bit));
}

int Fixed::toInt(void) const { return (this->getRawBits() >> this->_bit); }

// Non Member functions
Fixed &Fixed::min(Fixed &l, Fixed &r) { return l > r ? r : l; }

Fixed &Fixed::max(Fixed &l, Fixed &r) { return l > r ? l : r; }

const Fixed &Fixed::min(Fixed const &l, Fixed const &r) {
  return l.getRawBits() > r.getRawBits() ? r : l;
}

const Fixed &Fixed::max(Fixed const &l, Fixed const &r) {
  return l.getRawBits() > r.getRawBits() ? l : r;
}

int const Fixed::_bit = 8;

std::ostream &operator<<(std::ostream &o, Fixed const &rhs) {
  o << rhs.toFloat();
  return o;
}