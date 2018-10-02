/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 11:00:22 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/02 11:25:08 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
}

Zombie::~Zombie()
{
}

std::string getName(void) const
{
    return this->_name;
}

void setName(std::string name)
{
    this->_name = name;
}

std::string getType(void) const
{
    return this->_type;
}

void setType(std::string type)
{
    this->_type = type;
}