/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:40:02 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/04 15:37:33 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_CLASS_CPP
#define FLAGTRAP_CLASS_CPP
#include <iostream>

class FlagTrap {
public:
  FlagTrap(std::string name);
  FlagTrap(FlagTrap const &);
  FlagTrap &operator=(FlagTrap const &);

  ~FlagTrap();

  void rangedAttack(std::string const &) const;
  void meleeAttack(std::string const &) const;
  void takeDamage(uint);
  void beRepaired(uint);

  void vaulthunter_dot_exe(std::string const &);

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
  static std::string _funny_attacks[];
};

#endif // !FLAGTRAP_CLASS_CPP