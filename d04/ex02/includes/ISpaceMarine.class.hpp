/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.class.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 13:30:38 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/06 13:30:56 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_CLASS_HPP
#define ISPACEMARINE_CLASS_HPP

class ISpaceMarine {
public:
  virtual ~ISpaceMarine() {}
  virtual ISpaceMarine *clone() const = 0;
  virtual void battleCry() const = 0;
  virtual void rangedAttack() const = 0;
  virtual void meleeAttack() const = 0;
};

#endif // !ISPACEMARINE_CLASS_HPP