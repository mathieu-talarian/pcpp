/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:30:48 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/02 17:43:44 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
#define BRAIN_CLASS_HPP
#include <iostream>
#include <sstream>
#include <string>

class Brain {
public:
  std::string identify() const;

private:
  std::string _thisToStr() const;
};

#endif