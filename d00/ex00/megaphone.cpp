/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 10:38:15 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/01 18:32:35 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

inline void toUpper(const char *arg)
{
    std::locale loc;

    std::string str(arg);
    std::string::iterator it;
    for (it = str.begin(); it < str.end(); it++)
        std::cout << std::toupper(*it, loc);
}

int main(int ac, char *av[])
{

    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        for (int i = 1; i < ac; i++)
            toUpper(av[i]);
        std::cout << std::endl;
    }
}