/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 18:48:42 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/10 18:48:52 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.class.hpp"

Base::Base() {}
Base::Base(Base const &cpy) { *this = cpy; }
Base &Base::operator=(Base const &cpy) {
  if (this != &cpy) {
  }
  return *this;
}
Base::~Base(void) {}