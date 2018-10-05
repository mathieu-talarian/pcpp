/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 00:11:28 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/06 00:17:26 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
#define CHARACTER_CLASS_HPP

#include "AWeapon.class.hpp"
#include "Enemy.class.hpp"
#include <iostream>

class Character {
public:
  Character(std::string const &);
  Character(Character const &);
  Character &operator=(Character const &);
  ~Character();

  void recoverAP();
  void equip(AWeapon *);
  void attack(Enemy *);

  std::string getName() const;
  int getAP() const;
  AWeapon *getWeapon() const;

private:
  std::string const _name;
  AWeapon *_weapon;
  int _ap;
};

std::ostream &operator<<(std::ostream &o, Character const &src);

#endif // !CHARACTER_CLASS_HPP