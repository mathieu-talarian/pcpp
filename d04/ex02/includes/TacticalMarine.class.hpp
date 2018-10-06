/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.class.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 13:42:19 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/06 13:49:37 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_CLASS_CPP
#define TACTICALMARINE_CLASS_CPP

#include "ISpaceMarine.class.hpp"
#include <iostream>

class TacticalMarine : public ISpaceMarine {
public:
  TacticalMarine();
  TacticalMarine(const TacticalMarine &);
  TacticalMarine &operator=(const TacticalMarine &);
  ~TacticalMarine();

  ISpaceMarine *clone() const;
  void battleCry() const;
  void rangedAttack() const;
  void meleeAttack() const;

private:
};
#endif // !TACTICALMARINE_CLASS_CPP