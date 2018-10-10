/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 01:20:28 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/11 01:24:01 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.class.hpp"

Array<T>::Array() {
}
Array::Array(Array const &cpy) { *this = cpy; }
Array &Array::operator=(Array const &cpy) { if (this != &cpy) {} return *this; }
Array::~Array(void){}