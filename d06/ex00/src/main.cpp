/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 00:25:46 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/10 00:52:02 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.class.hpp"
#include <iostream>
#include <stdexcept>

const int getP(const char *str) {
  uint prev, next;
  prev = 0;
  while (str[prev] && str[prev] != '.')
    prev++;
  next = prev;
  while (str[next] && isdigit(str[next]))
    next += 1;
  next -= prev;
  return ((strlen(str) == prev || next == 1) ? 1 : next - 1);
}

void convert(const char *av) {
  int prec;
  double value;
  Conversion conv;

  prec = getP(av);
  value = atof(av);
  try {
    conv.toChar(value);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  try {
    conv.toInt(value);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  try {
    conv.toDouble(value);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  try {
    conv.toFloat(value);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}

int main(int ac, char *av[]) {

  for (int i = 1; i < ac; i++) {
    convert(av[i]);
  }
}