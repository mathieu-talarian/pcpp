/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 02:18:12 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/04 03:08:36 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP
#include <iostream>
#include <cmath>

class Fixed {
public:
  Fixed(void);
  Fixed(int const);
  Fixed(float const);
  Fixed(const Fixed &);
  Fixed &operator=(const Fixed &);
  ~Fixed(void);

  int getRawBits(void) const;
  void setRawBits(int);
  float toFloat(void) const;
  int toInt(void) const;

private:
  int _raw;
  static int const _bit;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif // !FIXED_CLASS_HPP
