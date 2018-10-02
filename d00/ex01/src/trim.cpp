/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:55:44 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/02 12:07:09 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

const std::string &chars = "\t\n\v\f\r ";

static inline std::string &ltrim(std::string &str)
{
    str.erase(0, str.find_first_not_of(chars));
    return str;
}

static inline std::string &rtrim(std::string &str)
{
    str.erase(str.find_last_not_of(chars) + 1);
    return str;
}

std::string &trim(std::string &str)
{
    return ltrim(rtrim(str));
}