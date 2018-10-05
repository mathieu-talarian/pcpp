/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 00:05:45 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/06 00:24:41 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.class.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
  std::cout << "* click click click *" << std::endl;
}
RadScorpion::RadScorpion(RadScorpion const &cpy) : Enemy(cpy) {
  std::cout << "* click click click *" << std::endl;
  *this = cpy;
}

RadScorpion::~RadScorpion(void) { std::cout << "* SPROTCH *" << std::endl; }
