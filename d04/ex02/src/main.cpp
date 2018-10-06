/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 13:26:39 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/07 00:17:22 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.class.hpp"
#include "Squad.class.hpp"
#include "TacticalMarine.class.hpp"

int main() {

  ISpaceMarine *bob = new TacticalMarine;
  // ISpaceMarine *jim = new AssaultTerminator;
  // ISpaceMarine *kk = bob->clone();
  Squad *vlc = new Squad;
  vlc->push(bob);
  // vlc->push(bob);
  // vlc->push(jim);
  // vlc->push(kk);
  Squad *vlc2 = new Squad;
  vlc2->push(bob);
  *vlc2 = *vlc;
  for (int i = 0; i < vlc->getCount(); ++i) {
    ISpaceMarine *cur = vlc->getUnit(i);
    cur->battleCry();
    cur->rangedAttack();
    cur->meleeAttack();
  }
  for (int i = 0; i < vlc2->getCount(); ++i) {
    ISpaceMarine *cur = vlc2->getUnit(i);
    cur->battleCry();
    cur->rangedAttack();
    cur->meleeAttack();
  }
  delete vlc;
}