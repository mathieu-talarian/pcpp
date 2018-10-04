/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 02:18:12 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/04 03:07:20 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP
#include <cmath>
#include <iostream>

class Fixed {
public:
  // Constructors
  Fixed(void);
  Fixed(int const);
  Fixed(float const);
  Fixed(const Fixed &);

  // Operators
  bool operator>(Fixed const &);
  bool operator<(Fixed const &);
  bool operator>=(Fixed const &);
  bool operator<=(Fixed const &);
  bool operator==(Fixed const &);
  bool operator!=(Fixed const &);
  Fixed &operator=(const Fixed &);
  Fixed operator+(Fixed const &);
  Fixed operator-(Fixed const &);
  Fixed operator*(Fixed const &);
  Fixed operator/(Fixed const &);
  Fixed &operator++(void);
  Fixed operator++(int);
  Fixed &operator--(void);
  Fixed operator--(int);

  // Destructor
  ~Fixed(void);

  // Member Functions
  int getRawBits(void) const;
  void setRawBits(int);
  float toFloat(void) const;
  int toInt(void) const;

  // Non Member function
  static Fixed &min(Fixed &, Fixed &);
  static Fixed &max(Fixed &, Fixed &);
  static const Fixed &min(Fixed const &, Fixed const &);
  static const Fixed &max(Fixed const &, Fixed const &);

private:
  int _raw;
  static int const _bit;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif // !FIXED_CLASS_HPP
