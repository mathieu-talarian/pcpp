/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 18:16:52 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/03 10:36:16 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_HPP
#define HUMANA_CLASS_HPP
#include "Weapon.class.hpp"

class HumanA {
public:
  HumanA(std::string name, Weapon& weapon);
  ~HumanA();
  void attack() const;
private:
  std::string _name;
  Weapon& _weapon;
};
#endif