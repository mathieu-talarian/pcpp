/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 14:39:22 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/03 16:38:02 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.class.hpp"

int main() {
  Human h;
  h.action("meleeAttack", "kevin");
  h.action("intimidatingShout", "alfred");
  h.action("sleep", "stephan");
  return 0;
}