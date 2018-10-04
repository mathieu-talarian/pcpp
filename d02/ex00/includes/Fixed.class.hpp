/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 02:18:12 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/04 02:28:32 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP
#include <iostream>

class Fixed {
public:
  Fixed(void);
  Fixed(const Fixed &);
  Fixed &operator=(const Fixed &);
  ~Fixed(void);

  int getRawBits(void) const;
  void setRawBits(int);

private:
  int _raw;
  static int const _bit;
};

#endif // !FIXED_CLASS_HPP
