/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 11:00:29 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/02 11:25:27 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
public:
  Zombie(std::string name, std::string type);
  ~Zombie();

  std::string getName() const;
  void setName(std::string);

  std::string getType() const;
  void setType(std::string);

private:
  std::string _name;
  std::string _type;
};
