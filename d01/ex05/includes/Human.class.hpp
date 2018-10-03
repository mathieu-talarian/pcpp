/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:31:01 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/03 12:04:36 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CLASS_HPP
#define HUMAN_CLASS_HPP
#include "Brain.class.hpp"

class Human {
public:
  Human();
  ~Human();
  const Brain &getBrain() const;
  std::string identify() const;

private:
  const Brain _brain;
};

#endif