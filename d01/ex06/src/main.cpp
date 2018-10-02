/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 18:15:33 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/02 18:40:22 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.class.hpp"
#include "HumanB.class.hpp"
#include "Weapon.class.hpp"

int main() {
  {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
  }
  // {
  //   Weapon club = Weapon("crude spiked club");
  //   HumanB jim("Jim");
  //   jim.setWeapon(club);
  //   jim.attack();
  //   club.setType("some other type of club");
  //   jim.attack();
  // }
}