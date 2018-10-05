/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 23:39:01 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/06 00:23:35 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_HPP
#define ENEMY_CLASS_HPP

#include <iostream>

class Enemy {
public:
  Enemy(int, std::string const &);
  Enemy(const Enemy &);
  Enemy &operator=(const Enemy &);
  virtual ~Enemy();

  int getHP(void) const;
  std::string getType(void) const;

  void setHP(int);
  void setType(std::string);

  virtual void takeDamage(int);

private:
  int _hp;
  std::string _type;
};

#endif // !ENEMY_CLASS_HPP