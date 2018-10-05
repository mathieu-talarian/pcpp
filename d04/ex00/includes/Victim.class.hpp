/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 18:56:02 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 19:41:04 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_CLASS_HPP
#define VICTIM_CLASS_HPP
#include <iostream>

class Victim {
public:
  Victim(std::string);
  Victim(Victim const &);
  Victim &operator=(Victim const &);

  ~Victim(void);

  std::string getName(void) const;

  void setName(std::string);

  virtual void getPolymorphed() const;

private:
  std::string _name;
};

std::ostream &operator<<(std::ostream &, Victim const &);

#endif // !VICTIM_CLASS_HPP