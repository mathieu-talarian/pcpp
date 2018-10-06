/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 13:27:22 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/06 16:08:36 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_CLASS_HPP
#define SQUAD_CLASS_HPP

#include "ISpaceMarine.class.hpp"
#include "ISquad.class.hpp"
#include "List.class.hpp"

class Squad : public ISquad {

public:
  Squad();
  Squad(const Squad &);
  Squad &operator=(const Squad &);
  ~Squad();
  int getCount() const;
  ISpaceMarine *getUnit(int) const;
  int push(ISpaceMarine *);

private:
  List *_squads;
  void _deletefn(ISpaceMarine *);
};

#endif // !SQUAD_CLASS_HPP