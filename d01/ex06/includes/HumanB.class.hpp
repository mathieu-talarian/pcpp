/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 18:16:47 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/03 11:10:20 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_CPP
#define HUMANB_CLASS_CPP

#include "Weapon.class.hpp"
#include <iostream>

class HumanB {
public:
  HumanB(std::string name);
  ~HumanB();
  void attack() const;
  void setWeapon(Weapon& weapon);

private:
  std::string _name;
  Weapon *_weapon;
};

#endif