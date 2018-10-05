/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 19:29:16 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 19:31:00 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.class.hpp"
#include "Sorcerer.class.hpp"
#include "Victim.class.hpp"

int main() {
  Sorcerer robert("Robert", "the Magnificent");
  Victim jim("Jimmy");
  Peon joe("Joe");
  std::cout << robert << jim << joe;
  robert.polymorph(jim);
  robert.polymorph(joe);
  return 0;
}