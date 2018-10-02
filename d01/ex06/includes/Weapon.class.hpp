/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 18:17:05 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/02 18:39:04 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
#define WEAPON_CLASS_HPP
#include <iostream>

class Weapon {
public:
  Weapon(std::string type);
  ~Weapon();
  std::string getType() const;
  void setType(std::string type);
private:
  std::string _type;
};

#endif