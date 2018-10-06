/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 13:26:39 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/06 16:24:47 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.class.hpp"
#include "TacticalMarine.class.hpp"

int main() {

  ISpaceMarine *bob = new TacticalMarine;
  ISquad *vlc = new Squad;
  vlc->push(bob);
  for (int i = 0; i < vlc->getCount(); ++i) {
    ISpaceMarine *cur = vlc->getUnit(i);
    cur->battleCry();
    cur->rangedAttack();
    cur->meleeAttack();
  }
  delete vlc;
  while (1)
    ;
}