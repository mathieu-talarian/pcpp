/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:20:23 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/02 17:24:39 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
  std::string str = "HI THIS IS BRAIN";
  std::string *ptr = &(str);
  std::string &ref = str;

  std::cout << "using pointer -> " << *ptr << std::endl;
  std::cout << "using ref -> " << ref << std::endl;
}