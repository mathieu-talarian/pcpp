/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 00:03:55 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/06 00:09:16 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_CLASS_HPP
#define RADSCORPION_CLASS_HPP

#include "Enemy.class.hpp"

class RadScorpion : public Enemy {
public:
  RadScorpion();
  RadScorpion(const RadScorpion &);
  using Enemy::operator=;
  ~RadScorpion();

  // void takeDamage(int);

private:
};

#endif // !RADSCORPION_CLASS_HPP