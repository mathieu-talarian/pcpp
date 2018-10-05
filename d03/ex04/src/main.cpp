/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 15:31:49 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 19:56:54 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"
#include "FlagTrap.class.hpp"
#include "NinjaTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "SuperTrap.class.hpp"

int main() {
  SuperTrap a("AA");
  ScavTrap b("BB");
  a.showStats();
  a.ninjaShoebox(b);
  a.vaulthunter_dot_exe("Jack");
  return 0;
}