/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 11:19:38 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/09 11:26:38 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Serializer.class.hpp"

Serializer::Serializer() {}
Serializer::Serializer(void *raw) {}
Serializer::Serializer(Serializer const &cpy) { *this = cpy; }
Serializer &Serializer::operator=(Serializer const &cpy) {
  if (this != &cpy) {
  }
  return *this;
}
Serializer::~Serializer(void) {}

void *Serializer::doSer() {

}