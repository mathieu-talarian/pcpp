/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:40:02 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 20:01:47 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_CLASS_CPP
#define FragTrap_CLASS_CPP
#include <iostream>

class FragTrap {
public:
  FragTrap(std::string name);
  FragTrap(FragTrap const &);
  FragTrap &operator=(FragTrap const &);

  ~FragTrap();

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

#endif // !FragTrap_CLASS_CPP