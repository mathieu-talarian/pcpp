/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ABullet.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 11:46:31 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/07 23:03:59 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABULLET_CLASS_HPP
#define ABULLET_CLASS_HPP

#include "AEntity.class.hpp"
#include "Vector.class.hpp"

class ABullet : public AEntity {
public:
  ABullet(Vector, char);
  ABullet(const ABullet &);
  using AEntity::operator=;
  virtual ~ABullet() = 0;

  virtual void collide(AEntity *) = 0;
  void activate(Vector, int);

private:
};

#endif // !ABULLET_CLASS_HPP
