/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 15:31:49 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/04 18:06:35 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include <time.h> /* time */

int main() {
  srand(time(NULL));
  FlagTrap a("Kevin");
  ScavTrap b("Strph");
  a.meleeAttack("Jack");
  a.rangedAttack("Jack");
  a.vaulthunter_dot_exe("Jack");
  a.takeDamage(25);
  a.takeDamage(25);
  a.takeDamage(25);
  a.takeDamage(25);
  a.takeDamage(25);
  b.takeDamage(30);
  b.challengerNewcomer();
  a.beRepaired(120);
}