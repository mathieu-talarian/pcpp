/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 19:28:03 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/07 21:20:51 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLET_CLASS_HPP
#define BULLET_CLASS_HPP

#include "ABullet.class.hpp"
#include "AEntity.class.hpp"

class Bullet : public ABullet {
public:
  Bullet(Vector, int);
  Bullet(const Bullet &);
  Bullet &operator=(const Bullet &);
  ~Bullet();

  void draw();
  void moveMe(long);
  bool toBeDeleted(int);
  void collide(AEntity *);
  void activate(Vector, int);

private:
  int _mv;
  static char _v;
};
#endif // !BULLET_CLASS_HPP