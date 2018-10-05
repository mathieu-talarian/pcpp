/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 18:54:57 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 19:26:27 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_CLASS_HPP
#define SORCERER_CLASS_HPP
#include <iostream>

#include "Victim.class.hpp"

class Sorcerer {
public:
  Sorcerer(std::string, std::string);
  Sorcerer(Sorcerer const &);
  Sorcerer &operator=(Sorcerer const &);

  ~Sorcerer();

  std::string getName(void) const;
  std::string getTitle(void) const;

  void setName(std::string name);
  void setTitle(std::string title);

  void polymorph(Victim const &);

private:
  std::string _name;
  std::string _title;
};

std::ostream &operator<<(std::ostream &o, Sorcerer const &);

#endif // !SORCERER_CLASS_HPP