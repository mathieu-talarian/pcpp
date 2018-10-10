/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 00:25:46 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/10 18:09:47 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Conversion.class.hpp"
#include "Conversion.class.hpp"
#include <iostream>
#include <stdexcept>

void convert(std::string av) {
  Conversion conv(av);

  try {
    std::cout << "char : '" << conv.toChar() << "'" << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  try {
    std::cout << "int : " << conv.toInt() << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  try {
    std::cout << "double : " << std::setprecision(conv.getP()) << std::fixed
              << conv.toDouble() << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  try {
    std::cout << "float : " << std::setprecision(conv.getP()) << std::fixed
              << conv.toFloat() << "f" << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}

int main(int ac, char *av[]) {
  for (int i = 1; i < ac; i++) {
    convert(std::string(av[i]));
  }
}