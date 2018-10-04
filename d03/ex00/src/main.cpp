/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 15:31:49 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/04 16:46:08 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.class.hpp"
#include <time.h> /* time */

int main() {
  srand(time(NULL));
  FlagTrap a("Kevin");
  a.meleeAttack("Jack");
  a.rangedAttack("Jack");
  a.vaulthunter_dot_exe("Jack");
  a.takeDamage(25);
  a.takeDamage(25);
  a.takeDamage(25);
  a.takeDamage(25);
  a.takeDamage(25);
  a.beRepaired(120);
}