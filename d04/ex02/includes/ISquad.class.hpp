/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 13:28:23 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/06 13:33:00 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_CLASS_HPP
#define ISQUAD_CLASS_HPP

class ISquad {
public:
  virtual ~ISquad() {}
  virtual int getCount() const = 0;
  virtual ISpaceMarine *getUnit(int) const = 0;
  virtual int push(ISpaceMarine *) = 0;
};

#endif // !ISQUAD_CLASS_HPP