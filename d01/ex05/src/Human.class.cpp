/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:30:26 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/03 12:04:43 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.class.hpp"

Human::Human(void) {}

Human::~Human(void) {}

std::string Human::identify() const { return this->_brain.identify(); }

const Brain &Human::getBrain() const { return this->_brain; }