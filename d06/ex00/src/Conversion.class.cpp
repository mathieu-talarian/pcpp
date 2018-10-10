/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 17:21:10 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/10 18:07:24 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.class.hpp"

Conversion::Conversion(std::string av)
    : _val(atof(av.c_str())), _p(this->_buildPrec(av)) {}

Conversion::Conversion(Conversion const &cpy) { *this = cpy; }

Conversion &Conversion::operator=(Conversion const &cpy) {
  if (this != &cpy) {
    this->_val = cpy.getV();
    this->_p = cpy.getP();
  }
  return *this;
}
Conversion::~Conversion(void) {}

double Conversion::getV() const { return this->_val; }
int Conversion::getP() const { return this->_p; }

void Conversion::setV(double v) { this->_val = v; }
void Conversion::setV(std::string v) { this->_val = atof(v.c_str()); }
void Conversion::setP(int p) { this->_p = p; }

int Conversion::_buildPrec(std::string str) {
  uint prev, next;
  std::string::iterator it;

  prev = 0;
  for (it = str.begin(); it < str.end() && *it != '.'; it++)
    prev++;
  next = prev + 1;
  it++;
  for (; it < str.end() && isdigit(*it); it++)
    next += 1;
  next -= prev;
  return ((str.length() == prev || next == 1) ? 1 : next - 1);
}

std::ostream &Conversion::prec(std::ostream &o) {
  o << std::setprecision(this->_p) << std::fixed;
  return o;
}

char Conversion::toChar() {
  if (std::isnan(this->_val))
    throw Conversion::ImpossibleConv();
  char c = static_cast<char>(this->_val);
  if (!std::isprint(c))
    throw Conversion::NonDisplayableConv();
  return (c);
}

int Conversion::toInt() {
  if (std::isnan(this->_val) || std::isinf(this->_val))
    throw Conversion::ImpossibleConv();
  if (this->_val > static_cast<double>(INT_MAX) ||
      this->_val < static_cast<double>(INT_MIN))
    throw Conversion::ImpossibleConv();
  return static_cast<int>(this->_val);
}

double Conversion::toDouble() { return static_cast<double>(this->_val); }

float Conversion::toFloat() { return static_cast<float>(this->_val); }

Conversion::ImpossibleConv::ImpossibleConv() {}
Conversion::ImpossibleConv::ImpossibleConv(ImpossibleConv const &cpy) {
  *this = cpy;
}
Conversion::ImpossibleConv &Conversion::ImpossibleConv::
operator=(ImpossibleConv const &cpy) {
  if (this != &cpy) {
  }
  return *this;
}

const char *Conversion::ImpossibleConv::what() const throw() {
  return ("The conversion is impossible");
}

Conversion::ImpossibleConv::~ImpossibleConv(void) throw() {}

Conversion::NonDisplayableConv::NonDisplayableConv() {}
Conversion::NonDisplayableConv::NonDisplayableConv(
    NonDisplayableConv const &cpy) {
  *this = cpy;
}
Conversion::NonDisplayableConv &Conversion::NonDisplayableConv::
operator=(NonDisplayableConv const &cpy) {
  if (this != &cpy) {
  }
  return *this;
}
const char *Conversion::NonDisplayableConv::what() const throw() {
  return ("Cannot be displayed");
}
Conversion::NonDisplayableConv::~NonDisplayableConv(void) throw() {}