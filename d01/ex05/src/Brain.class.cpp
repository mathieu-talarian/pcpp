/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:30:30 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/02 17:44:29 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.class.hpp"

std::string Brain::identify() const { return this->_thisToStr(); }

std::string Brain::_thisToStr() const {
  const void *address = static_cast<const void *>(this);
  std::stringstream ss;
  ss << address;
  std::string name = ss.str();
  return name;
}