/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 11:18:11 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/01 18:09:25 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "Contact.class.hpp"
#include <iomanip>

void NoSpaceLeft(void)
{
    std::cerr << "Pas de place dans le tableau" << std::endl;
}

void addContact(Contact tab[8])
{
    if (Contact::getNbFilled() < 9)
        tab[Contact::getNbFilled()].fillContact();
    else
        NoSpaceLeft();
}

void searchContact(Contact tab[8])
{

    std::string str = "ttttttttttt";
    if (str.length() > 10)
    {
        str.resize(9);
        str.resize(10, '.');
    }
    std::cout
        << '|' << std::setfill(' ') << std::setw(10) << str << '|' << std::endl;
    int cpt = 0;

    for (int i = 0; i < 8; i++)
    {

        if (tab[i].isFilled())
        {
            cpt++;
            tab[i].Print();
        }
    }
    if (cpt == 0)
        std::cout << "No persons added" << std::endl;
}

int main(void)
{
    Contact tab[8];
    std::string input;

    while (std::getline(std::cin, input))
    {
        trim(input);
        if (input.compare("ADD") == 0)
            addContact(tab);
        else if (input.compare("SEARCH") == 0)
            searchContact(tab);
        else if (input.compare("EXIT") == 0)
            std::exit(0);
        else
        {
            std::cout << "\r";
            continue;
        }
    }
}