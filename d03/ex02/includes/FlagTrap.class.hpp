/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:40:02 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 15:02:33 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_CLASS_CPP
#define FLAGTRAP_CLASS_CPP

#include "ClapTrap.class.hpp"

#define FTCQ                                                                   \
  "Let's get this party started! \n"                                           \
  "... ... ... \n"                                                             \
  "... ... ... \n"                                                             \
  "... ... ... \n"                                                             \
  "I once started a revolution myself. There were lots of guns and a lot "     \
  "of "                                                                        \
  "dying. \n"                                                                  \
  "... ... ... \n"                                                             \
  "... ... ... \n"                                                             \
  "... ... ... \n"                                                             \
  "You'd think I would have gotten some better benefits out of the whole "     \
  "thing but no, demoted back to door-opening servitude!\n"                    \
  "... ... ... \n"                                                             \
  "... ... ... \n"                                                             \
  "... ... ... \n"                                                             \
  "Creep ?\n"

#define FTDQ "I'll die the way I lived: annoying!"

class FlagTrap : public ClapTrap {
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
  int _energy_points;
  int _max_energy_points;
  std::string _name;
  int _melee_attack_damage;
  int _ranged_attack_damage;
  int _armor_damage_reduction;

  static std::string _funny_attacks[];
};

#endif // !FLAGTRAP_CLASS_CPP