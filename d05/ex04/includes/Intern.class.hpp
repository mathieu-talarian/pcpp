/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 00:13:34 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/09 18:30:51 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CLASS_HPP
#define INTERN_CLASS_HPP

#include "Form.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include <iostream>

class Form;
using namespace std;
class Intern {

public:
  Intern(void);
  Intern(Intern const &);
  ~Intern(void);
  Intern &operator=(Intern const &);

  Form *makeForm(std::string, std::string);

  class FormNotFoundException : public exception {
  public:
    FormNotFoundException();
    FormNotFoundException(FormNotFoundException const &);
    ~FormNotFoundException() throw();
    FormNotFoundException &operator=(FormNotFoundException const &);
    virtual const char *what() const throw();
  };

private:
  // Form *_searchForm(std::string, std::string);
  Form *_newP(std::string);
  Form *_newR(std::string);
  Form *_newS(std::string);
};

#endif // !INTERN_CLASS_HPP
