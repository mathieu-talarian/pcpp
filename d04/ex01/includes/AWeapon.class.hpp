/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 22:57:01 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/06 00:48:30 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_CLASS_HPP
#define AWEAPON_CLASS_HPP
#include <iostream>

class AWeapon {
public:
  AWeapon(std::string const &, int, int);
  AWeapon(AWeapon const &);
  AWeapon &operator=(AWeapon const &);

  virtual ~AWeapon(void);

  std::string getName() const;
  int getApCost() const;
  int getDmg() const;

  void setName(std::string name);
  void setApCost(int);
  void setDmg(int);

  virtual void attack() const = 0;

private:
  std::string _name;
  int _apcost;
  int _dmg;
};
#endif // !AWEAPON_CLASS_HPP