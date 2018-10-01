/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 11:20:29 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/01 18:53:06 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <regex>
#include "phonebook.hpp"
#include <string.h>
#include <iomanip>

#include "Contact.class.hpp"

Contact::Contact(void)
{
    this->_is_filled = false;
    Contact::_nbContacts++;
}

Contact::~Contact(void)
{
    Contact::_nbContacts--;
}

bool Contact::isFilled() const
{
    return this->_is_filled;
}

void Contact::_p(const std::string str) const
{
    std::cout << str << std::endl;
}

std::string Contact::_totab(const std::string str) const
{
    if (str.length() > 10)
    {
        str.resize(9);
        str.resize(10, '.');
    }
    return str;
}

void Contact::Print() const
{
    std::cout << '|' << std::setw(10) << this->_index
              << '|' << std::setw(10) << this->_totab(this->_firstName)
              << '|' << std::setw(10) << this->_totab(this->_lastName)
              << '|' << std::setw(10) << this->_totab(this->_login)
              << '|' << std::endl;
}

int Contact::getNbInstances(void)
{
    return Contact::_nbContacts;
}

int Contact::getNbFilled(void)
{
    return Contact::_nbFilled;
}

int Contact::fill(const char *field, std::string &var)
{
    std::string input;
    std::cout << "Enter " << field << std::endl;
    std::getline(std::cin, input);
    trim(input);
    if (input.length() == 0)
        return 0;
    var = input;
    return 1;
}

int Contact::fillEmail(std::string &email)
{
    const std::regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    std::string input;
    std::cout << "Enter email" << std::endl;
    std::getline(std::cin, input);
    trim(input);
    if (input.length() == 0)
        return 0;
    if (std::regex_match(input, pattern) == 0)
        return -1;
    email = input;
    return 1;
}

int Contact::fillPhoneNumber(std::string &pn)
{
    const std::regex pattern("^((\\+)33|0)[1-9](\\d{2}){4}$");
    std::string input;
    std::cout << "Enter phone number" << std::endl;
    std::getline(std::cin, input);
    trim(input);
    if (input.length() == 0)
        return 0;
    if (std::regex_match(input, pattern) == 0)
        return -2;
    pn = input;
    return 1;
}

int Contact::fillBirthdayDate(std::string &dt)
{
    const std::regex pattern("^([0-2]{1}[0-9]{1}|[3]{1}[0-1]{1})/(0[1-9]{1}|1[0-2]{1})/[0-9]{4}$");
    std::string input;
    std::cout << "Enter birthday" << std::endl;
    std::getline(std::cin, input);
    trim(input);
    if (input.length() == 0)
        return 0;
    if (std::regex_match(input, pattern) == 0)
        return -3;
    dt = input;
    return 1;
}

void Contact::_cbb(int err) const
{
    if (err == 0)
        std::cout << "Can't be blank" << std::endl;
    else if (err == -1)
        std::cout << "Don't match email pattern" << std::endl;
    else if (err == -2)
        std::cout << "Don't match phone pattern" << std::endl;
    else if (err == -3)
        std::cout << "Don't match date pattern `DD/MM/YYYY`" << std::endl;
}

int Contact::fillContact(void)
{
    int err = 0;
    while (!this->fill("Fist Name", this->_firstName))
        this->_cbb(0);
    while (!this->fill("Last Name", this->_lastName))
        this->_cbb(0);
    while (!this->fill("Nickname", this->_nickname))
        this->_cbb(0);
    while (!this->fill("Login", this->_login))
        this->_cbb(0);
    while (!this->fill("Postal Address", this->_postalAddress))
        this->_cbb(0);
    while ((err = this->fillEmail(this->_emailAddress)) <= 0)
        this->_cbb(err);
    while ((err = this->fillPhoneNumber(this->_phoneNumber)) <= 0)
        this->_cbb(err);
    while ((err = this->fillBirthdayDate(this->_birthdayDate)) <= 0)
        this->_cbb(err);
    while (!this->fill("Favorite Meal", this->_favoriteMeal))
        this->_cbb(err);
    while (!this->fill("Underwear color", this->_underwearColor))
        this->_cbb(err);
    while (!this->fill("Darkest secret", this->_darkestSecret))
        this->_cbb(err);
    std::cout << "\033[32m"
              << "Contact added"
              << "\033[0m" << std::endl;
    this->_is_filled = true;
    Contact::_nbFilled++;
    this->_index = Contact::_nbFilled;
    return 0;
}

int Contact::_nbContacts = 0;
int Contact::_nbFilled = 0;