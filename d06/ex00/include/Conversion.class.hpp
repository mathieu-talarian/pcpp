/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 00:35:27 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/10 00:38:57 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_CLASS_HPP
#define CONVERSION_CLASS_HPP

class Conversion {
public:
  Conversion();
  Conversion(const Conversion &);
  Conversion &operator=(const Conversion &);
  ~Conversion();

  const char toChar(double);
  const int toInt(double);
  const double toDouble(double);
  const float toFloat(double);

private:
};

#endif // !CONVERSION_CLASS_HPP