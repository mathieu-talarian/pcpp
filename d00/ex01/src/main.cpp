/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 11:18:11 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/02 11:21:26 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


void NoSpaceLeft(void)
{
	std::cerr << "No space left" << std::endl;
}

void addContact(Contact tab[8])
{
	if (Contact::getNbFilled() < 8)
		tab[Contact::getNbFilled()].fillContact();
	else
		NoSpaceLeft();
}

int main(void)
{
	Contact tab[8];
	std::string input;

	std::cout << "PHONEBOOK" << std::endl
			  << std::endl;
	std::cout << "Enter ADD | SEARCH | EXIT" << std::endl
			  << "> ";

	while (std::getline(std::cin, input))
	{
		trim(input);
		if (input.compare("ADD") == 0)
			addContact(tab);
		else if (input.compare("SEARCH") == 0)
			searchContact(tab);
		else if (input.compare("EXIT") == 0)
			std::exit(0);
		std::cout << "\r";
		std::cout << "Enter ADD | SEARCH | EXIT" << std::endl
				  << "> ";
		continue;
	}
}
