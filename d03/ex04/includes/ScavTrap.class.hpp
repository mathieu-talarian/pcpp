/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 17:05:06 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 18:01:05 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
#define SCAVTRAP_CLASS_HPP

#include "ClapTrap.class.hpp"

#define STCQ                                                                   \
  "I am right behind you, Vault Hunting friend! \n"                            \
  "... ... ... \n"                                                             \
  "... ... ... \n"                                                             \
  "... ... ... \n"                                                             \
  "Annihilate them for breakfast, Willy! \n"                                   \
  "... ... ... \n"                                                             \
  "... ... ... \n"                                                             \
  "... ... ... \n"                                                             \
  "I will prove to you my robotic superiority! \n"                             \
  "... ... ... \n"                                                             \
  "... ... ... \n"                                                             \
  "... ... ... \n"                                                             \
  "Staiiiiiiiiiiiiiiiiiiiiiirs 😭\n"

#define STDQ "No fair! I wasn't ready.\n"

class ScavTrap : virtual public ClapTrap {

public:
  ScavTrap(std::string name);
  ScavTrap(ScavTrap const &);
  ScavTrap &operator=(ScavTrap const &);

  ~ScavTrap();

  void challengerNewcomer() const;

private:
  static std::string _challenges[];
};

#endif // !SCAVTRAP_CLASS_HPP
