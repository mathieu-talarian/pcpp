/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 14:39:33 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/03 16:21:43 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CLASS_HPP
#define HUMAN_CLASS_HPP
#include <iostream>

class Human {

private:
  void meleeAttack(std::string const &target);
  void rangedAttack(std::string const &target);
  void intimidatingShout(std::string const &target);

public:
  void action(std::string const &action_name, std::string const &target);
};

#endif