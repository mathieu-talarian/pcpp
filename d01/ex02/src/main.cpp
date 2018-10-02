/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 13:33:28 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/02 16:25:35 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.class.hpp"

int main() {
  srand(time(NULL));

  ZombieEvent event;
  Zombie *a;
  Zombie *b;
  a = event.randomChump();
  if (a)
    delete a;
  event.setZombieType("the witch");
  b = event.randomChump();
  if (b)
    delete b;
  event.setZombieType("the smoker");
  Zombie *z = event.newZombie("Kevin");
  z->announce();
  delete z;
  return 0;
}