/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 12:15:29 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/02 13:53:22 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
#define ZOMBIE_CLASS_HPP
#include <iostream>

class Zombie {
public:
  Zombie(std::string name, std::string type);
  ~Zombie(void);

  std::string getName() const;
  std::string getType() const;

  void setName(std::string name);
  void setType(std::string type);

  void announce() const;

private:
  std::string _name;
  std::string _type;
};

#endif