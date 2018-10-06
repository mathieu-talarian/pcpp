/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.class.hpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:58:57 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/06 17:02:26 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_CLASS_HPP
#define ASSAULTTERMINATOR_CLASS_HPP

#include "ISpaceMarine.class.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine {
public:
  AssaultTerminator();
  AssaultTerminator(const AssaultTerminator &);
  AssaultTerminator &operator=(const AssaultTerminator &);
  ~AssaultTerminator();

  ISpaceMarine *clone() const;
  void battleCry() const;
  void rangedAttack() const;
  void meleeAttack() const;

private:
};

#endif // !ASSAULTTERMINATOR_CLASS_HPP