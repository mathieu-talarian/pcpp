/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 15:11:22 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/02 16:22:27 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_CLASS_HPP
#define ZOMBIE_EVENT_CLASS_HPP
#include "Zombie.class.hpp"
#include <iostream>
#include <time.h>

class ZombieEvent {
public:
  //   ZombieEvent();
  //   ~ZombieEvent();

  void setZombieType(std::string type);
  Zombie *newZombie(std::string name);
  Zombie *randomChump();

private:
  std::string _type;
  static std::string _randomName();
  static std::string _namePool[20];
};

#endif