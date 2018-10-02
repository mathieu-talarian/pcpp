/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:30:26 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/02 18:01:19 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.class.hpp"

Human::Human(void) {}

Human::~Human(void) {}

std::string Human::identify() const { return this->_brain.identify(); }

Brain &Human::getBrain() { return this->_brain; }