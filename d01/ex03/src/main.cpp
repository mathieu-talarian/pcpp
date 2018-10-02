/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 16:52:28 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/02 17:16:57 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.class.hpp"

int main(void) {
  srand(time(NULL));
  ZombieHorde horde(20);
  horde.announce();
}