/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 10:17:50 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/02 10:38:01 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Pony.class.hpp>

Pony::Pony(std::string name, std::string stack) : _name(name), _stack(stack)
{
    std::cout << "A new pony was created on the " << this->_stack << std::endl;
}

Pony::~Pony(void)
{
    std::cout << "Pony on the " << this->_stack << " was killed" << std::endl;
}

void Pony::Talk(void)
{
    std::cout << "i am a poney, not an unicorn" << std::endl;
}

void Pony::RunAway(void)
{
    std::cout << "galop galop galop..." << std::endl;
}

void Pony::ComeBack(void)
{
    std::cout << "... galop galop galop" << std::endl;
}

void Pony::SayMyName(void)
{
    std::cout << "i am groot" << std::endl;
    std::cout << "noo, i am " << this->_name << std::endl;
}
