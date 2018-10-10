/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 00:35:27 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/10 20:31:46 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_CLASS_HPP
#define CONVERSION_CLASS_HPP

#include <climits>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <string>

class Conversion {
public:
  Conversion(std::string);
  Conversion(const Conversion &);
  Conversion &operator=(const Conversion &);
  ~Conversion();

  double getV() const;
  int getP() const;

  void setV(double);
  void setV(std::string);
  void setP(int);

  std::ostream &prec(std::ostream &o);

  char toChar();
  int toInt();
  double toDouble();
  float toFloat();

  class ImpossibleConv : public std::exception {
  public:
    ImpossibleConv();
    ImpossibleConv(const ImpossibleConv &);
    ImpossibleConv &operator=(const ImpossibleConv &);
    ~ImpossibleConv() throw();
    virtual const char *what() const throw();
  };
  class NonDisplayableConv : public std::exception {
  public:
    NonDisplayableConv();
    NonDisplayableConv(const NonDisplayableConv &);
    NonDisplayableConv &operator=(const NonDisplayableConv &);
    ~NonDisplayableConv() throw();
    virtual const char *what() const throw();
  };

private:
  bool _isNan(char) const;
  bool _isNan(int) const;
  bool _isNan(float) const;
  bool _isNan(double) const;

  int _buildPrec(std::string);
  double _val;
  int _p;
};

#endif // !CONVERSION_CLASS_HPP