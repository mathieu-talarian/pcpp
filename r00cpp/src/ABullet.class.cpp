/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ABullet.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 11:49:32 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/07 23:04:03 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ABullet.class.hpp"

ABullet::ABullet(Vector pos, char c) : AEntity(pos, c) {}

ABullet::ABullet(ABullet const &cpy) : AEntity(cpy) { *this = cpy; }

ABullet::~ABullet() {}

void ABullet::activate(Vector pos, int y) {
  y = 0;
  (void)pos;
}