/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:46:33 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/07 22:25:00 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHIP_CLASS_HPP
#define SHIP_CLASS_HPP

#include "AEntity.class.hpp"
#include "Vector.class.hpp"

#include <iostream>

class Ship : public AEntity {
public:
  Ship(Vector, char);
  Ship(const Ship &);
  Ship &operator=(const Ship &);
  ~Ship();

  void draw();
  void moveMe(long);
  bool toBeDeleted(int);
  void Action(int const &, Vector const &);
  void activate(Vector, int);
  void collide(AEntity *);
  void WmoveLeft();
  void WmoveRight();
  void WmoveUp();
  void WmoveDown();

private:
  Vector _pos1;
  Vector _pos2;
  // Vector _pos;
};

#endif // !SHIP_CLASS_HPP
