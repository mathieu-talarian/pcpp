/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 16:54:11 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/02 17:16:04 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_CLASS_HPP
#define ZOMBIE_HORDE_CLASS_HPP
#include "Zombie.class.hpp"

class ZombieHorde {
public:
  ZombieHorde(int n);
  ~ZombieHorde();
  void announce() const;

private:
  Zombie **_zombies;
  int _n;
static std::string _randomName();
static std::string _namePool[20]; 
};

#endif