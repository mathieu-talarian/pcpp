/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 00:14:27 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/09 00:26:50 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.class.hpp"

Intern::Intern(void) {}

Intern::Intern(Intern const &src) { *this = src; }

Intern &Intern::operator=(Intern const &) { return *this; }

Intern::~Intern(void) {}

Form *Intern::makeForm(std::string name, std::string target) {
  try {
    return _searchForm(name, target);
  } catch (std::exception &e) {
    std::cout << name << " : form not found... :(" << std::endl;
    return NULL;
  }
}

Form *Intern::_searchForm(std::string name, std::string target) {
  std::string names[3] = {"presidential pardon", "robotomy request",
                          "shrubbery creation"};

  typedef Form *(Intern::*memberFunction)(std::string);

  memberFunction mf[] = {&Intern::_newP, &Intern::_newR, &Intern::_newS};

  for (int i = 0; i < 3; i += 1) {
    if (name == names[i])
      return (this->*(mf[i]))(target);
  }
  std::cout << "Form not found" << std::endl;
  return (NULL);
}

Form *Intern::_newP(std::string target) {
  return (new PresidentialPardonForm(target));
}

Form *Intern::_newR(std::string target) {
  return (new RobotomyRequestForm(target));
}

Form *Intern::_newS(std::string target) {
  return (new ShrubberyCreationForm(target));
}
