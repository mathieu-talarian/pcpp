/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 11:18:11 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/01 21:07:38 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "Contact.class.hpp"
#include <iomanip>
#include <cstdlib>

void NoSpaceLeft(void)
{
	std::cerr << "No space left" << std::endl;
}

void addContact(Contact tab[8])
{
	std::cout << Contact::getNbFilled() << std::endl;
	if (Contact::getNbFilled() < 8)
		tab[Contact::getNbFilled()].fillContact();
	else
		NoSpaceLeft();
}

void printTabHead()
{
	std::cout << '|' << std::setw(10) << "Index"
			  << '|' << std::setw(10) << "Firstname"
			  << '|' << std::setw(10) << "LastName"
			  << '|' << std::setw(10) << "Login"
			  << '|' << std::endl;
}

void checkAndPrintContact(Contact tab[8], std::string input)
{
	int i = std::atoi(input.c_str()) - 1;
	if (i > 0 && i < 9)
	{
		i--;
		if (tab[i].isFilled())
			return tab[i].PrintFull();
		else
		{
			std::cerr << "This contact is empty" << std::endl;
			return;
		}
	}
	std::cerr << "Please enter a good number" << std::endl;
	return;
}

void askForPerson(Contact tab[8])
{
	std::string input;
	std::cout << "=> Enter an index or RETURN" << std::endl;

	while (std::getline(std::cin, input))
	{
		trim(input);
		if (input.compare("RETURN") == 0)
			return;
		else
			checkAndPrintContact(tab, input);
	}
}

void searchContact(Contact tab[8])
{
	int cpt = 0;

	for (int i = 0; i < 8; i++)
	{
		if (tab[i].isFilled())
		{
			if (cpt == 0)
				printTabHead();
			cpt++;

			tab[i].Print();
		}
	}
	if (cpt == 0)
		std::cout << "No persons added" << std::endl;
	else
		return askForPerson(tab);
}

int main(void)
{
	Contact tab[8];
	std::string input;

	std::cout << "PHONEBOOK" << std::endl
			  << std::endl;
	std::cout << "Enter ADD | SEARCH | EXIT" << std::endl;

	while (std::getline(std::cin, input))
	{
		std::cout << "Enter ADD | SEARCH | EXIT" << std::endl;
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
