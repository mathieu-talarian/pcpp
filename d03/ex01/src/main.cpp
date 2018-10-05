/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 15:31:49 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 20:01:44 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include <time.h> /* time */

int main() {
  srand(time(NULL));
  FragTrap a("Kevin");
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