/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 23:58:14 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/06 00:00:31 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_CLASS_HPP
#define SUPERMUTANT_CLASS_HPP

#include "Enemy.class.hpp"

class SuperMutant : public Enemy {
public:
  SuperMutant();
  SuperMutant(const SuperMutant &);
  using Enemy::operator=;
  ~SuperMutant();

  void takeDamage(int);

private:
};

#endif // !SUPERMUTANT_CLASS_HPP