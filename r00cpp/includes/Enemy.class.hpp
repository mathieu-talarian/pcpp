/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 11:42:56 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/07 23:29:08 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_HPP
#define ENEMY_CLASS_HPP

#include "AEntity.class.hpp"
#include "Vector.class.hpp"
#include <stdlib.h>

#include <stdio.h>

class Enemy : public AEntity {
public:
  Enemy(Vector);
  Enemy(const Enemy &);
  using AEntity::operator=;
  ~Enemy();

  void draw(void);
  virtual void moveMe(long);
  bool toBeDeleted(int);

  void activate(Vector, int);

private:
  static const int _mv = -1;
  static const char _e[];
  static const int _el;
  int _speed;
};
#endif // !ENEMY_CLASS_HPP
