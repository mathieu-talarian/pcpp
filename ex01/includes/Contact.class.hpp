/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 11:20:59 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/01 20:00:05 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

class Contact
{
public:
  Contact(void);
  ~Contact(void);

  static int getNbInstances(void);
  static int getNbFilled(void);

  int fill(const char *field, std::string &var);
  int fillEmail(std::string &email);
  int fillPhoneNumber(std::string &pn);
  int fillBirthdayDate(std::string &dt);
  int fillContact(void);

  bool isFilled() const;
  void Print() const;
  void PrintFull() const;

private:
  std::string _firstName;
  std::string _lastName;
  std::string _nickname;
  std::string _login;
  std::string _postalAddress;
  std::string _emailAddress;
  std::string _phoneNumber;
  std::string _birthdayDate;
  std::string _favoriteMeal;
  std::string _underwearColor;
  std::string _darkestSecret;
  int _index;
  bool _is_filled;

  static int _nbFilled;
  static int _nbContacts;

  void _cbb(int err) const; // cant be blank
  void _p(const std::string) const;
  std::string _totab(const std::string) const;
};

#endif