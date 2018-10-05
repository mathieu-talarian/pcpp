/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 18:09:37 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 17:59:25 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
#define CLAPTRAP_CLASS_HPP
#include <iostream>

#define STD(x) std::cout << x << std::endl << std::endl;
#define ENDL std::endl

class ClapTrap {
public:
  ClapTrap(std::string name);
  ClapTrap(ClapTrap const &);
  ClapTrap &operator=(ClapTrap const &);

  ~ClapTrap();

  // getters / setters
  uint getHP(void) const;
  void setHP(uint);

  uint getMHP(void) const;
  void setMHP(uint);

  uint getLVL(void) const;
  void setLVL(uint);

  std::string getName(void) const;
  // - *

  void rangedAttack(std::string const &) const;
  void meleeAttack(std::string const &) const;
  void takeDamage(uint);
  void beRepaired(uint);

  void showStats(void) const;

protected:
  int _energy_points;
  int _max_energy_points;
  std::string _name;
  int _melee_attack_damage;
  int _ranged_attack_damage;
  int _armor_damage_reduction;

private:
  uint _hit_points;
  uint _max_hit_points;
  uint _level;
};

#endif // !CLAPTRAP_CLASS_HPP