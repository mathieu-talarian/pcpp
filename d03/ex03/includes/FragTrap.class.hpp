/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:40:02 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 20:03:42 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_CLASS_CPP
#define FragTrap_CLASS_CPP

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

class FragTrap : public ClapTrap {
public:
  FragTrap(std::string name);
  FragTrap(FragTrap const &);
  FragTrap &operator=(FragTrap const &);

  ~FragTrap();

  void vaulthunter_dot_exe(std::string const &);

private:
  static std::string _funny_attacks[];
};

#endif // !FragTrap_CLASS_CPP