/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 19:17:51 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/08 21:57:03 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.class.hpp"

Form::Form() : _name("Form"), _signed(false), _sign(6), _exec(12) {}

Form::Form(std::string name, int sign, int exec)
    : _name(name), _signed(false), _sign(sign), _exec(exec) {
  if (sign > 150 || exec > 150)
    throw Form::GradeTooLowException();
  else if (sign < 1 || exec < 1)
    throw Form::GradeTooHighException();
  else
    this->_signed = 0;
}

Form::Form(Form const &src)
    : _name(src._name), _signed(false), _sign(src._sign), _exec(src._exec) {
  *this = src;
}

Form::~Form() {}

Form &Form::operator=(Form const &cpy) {
  this->_signed = cpy.getSigned();
  return *this;
}

std::string Form::getName() const { return (this->_name); }

bool Form::getSigned() const { return (this->_signed); }

int Form::getSign() const { return (this->_sign); }

int Form::getExec() const { return (this->_exec); }

void Form::setSigned() { this->_signed = 1; }

void Form::beSigned(Bureaucrat &src) {
  if (src.getGrade() > this->_sign) {
    throw Form::GradeTooLowException();
  } else if (this->_signed == 1) {
    std::cout << src.getName() << " cannot sign " << this->_name
              << " because the form is already signed." << std::endl;
    return;
  }
  std::cout << src.getName() << " signs " << this->_name << std::endl;
  this->setSigned();
}

std::ostream &operator<<(std::ostream &o, Form const &src) {
  o << "Form " << src.getName() << std::endl
    << "\t-> signed grade :" << src.getSign() << std::endl
    << "\t-> exec grade : " << src.getExec() << std::endl
    << "\t-> signed status : " << src.getSigned() << std::endl;
  return o;
}

Form::GradeTooHighException::GradeTooHighException() {}

Form::GradeTooHighException::GradeTooHighException(
    GradeTooHighException const &src) {
  *this = src;
}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooHighException &Form::GradeTooHighException::
operator=(GradeTooHighException const &) {
  return *this;
}

const char *Form::GradeTooHighException::what() const throw() {
  return ("Bureaucrat grade is too high");
}

Form::GradeTooLowException::GradeTooLowException() {}

Form::GradeTooLowException::GradeTooLowException(
    GradeTooLowException const &src) {
  *this = src;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooLowException &Form::GradeTooLowException::
operator=(GradeTooLowException const &) {
  return *this;
}

const char *Form::GradeTooLowException::what() const throw() {
  return ("Bureaucrat grade is too low");
}