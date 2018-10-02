/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:31:01 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/02 18:01:16 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CLASS_HPP
#define HUMAN_CLASS_HPP
#include "Brain.class.hpp"

class Human {
public:
  Human();
  ~Human();
  Brain &getBrain();
  std::string identify() const;

private:
  Brain _brain;
};

#endif