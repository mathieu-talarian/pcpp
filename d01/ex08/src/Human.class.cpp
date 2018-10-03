/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 14:39:08 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/03 16:38:56 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.class.hpp"

void Human::meleeAttack(std::string const &target) {
  std::cout << "melee attack to " << target << std::endl;
}

void Human::rangedAttack(std::string const &target) {
  std::cout << "ranged attack to " << target << std::endl;
}

void Human::intimidatingShout(std::string const &target) {
  std::cout << "🔥 " << target << std::endl;
}

void Human::action(std::string const &action_name, std::string const &target) {
  std::string actions[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
  typedef void (Human::*memberFn)(std::string const &target);
  memberFn mf[] = {&Human::meleeAttack, &Human::rangedAttack,
                   &Human::intimidatingShout};
  for (int i = 0; i < 3; i++) {
    if (actions[i].compare(action_name) == 0) {
      (this->*(mf[i]))(target);
      break;
    }
  }
}