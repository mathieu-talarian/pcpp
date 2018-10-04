/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 17:05:06 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/04 18:05:25 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
#define SCAVTRAP_CLASS_HPP

#include <iostream>

class ScavTrap {

public:
  ScavTrap(std::string name);
  ScavTrap(ScavTrap const &);
  ScavTrap &operator=(ScavTrap const &);

  ~ScavTrap();

  void rangedAttack(std::string const &) const;
  void meleeAttack(std::string const &) const;
  void takeDamage(uint);
  void beRepaired(uint);

  void challengerNewcomer() const;

private:
  int _hit_points;
  uint _max_hit_points;
  int _energy_points;
  int _max_energy_points;
  int _level;
  std::string _name;
  int _melee_attack_damage;
  int _ranged_attack_damage;
  int _armor_damage_reduction;
  static std::string _construction_quote;
  static std::string _destruction_quote;
  static std::string _challenges[];
};

#endif // !SCAVTRAP_CLASS_HPP
