/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 22:14:46 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/09 00:32:02 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.class.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form("Shrubbery", "shrubbery", ShrubberyCreationForm::_sign,
           ShrubberyCreationForm::_exec) {
  return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : Form("Shrubbery", target, ShrubberyCreationForm::_sign,
           ShrubberyCreationForm::_exec) {
  return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy)
    : Form(cpy.getName(), cpy.getTarget(), cpy.getSign(), cpy.getExec()) {
  *this = cpy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm &ShrubberyCreationForm::
operator=(ShrubberyCreationForm const &rhs) {
  if (this != &rhs)
    return *this;
  return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
  std::string name = this->getTarget() + ".tree";
  if (executor.getGrade() <= 137 && this->getSigned() == true) {
    std::ofstream ofs(name.c_str());
    if (ofs) {
      ofs << "         _-_           " << std::endl
          << "      /~~   ~~\\        " << std::endl
          << "   /~~         ~~\\     " << std::endl
          << "  {               }    " << std::endl
          << "   \\  _-     -_  /     " << std::endl
          << "     ~  \\\\ //  ~       " << std::endl
          << "  _- -   | | _- _      " << std::endl
          << "    _ -  | |   -_      " << std::endl
          << "        // \\\\          " << std::endl;
    }
    ofs.close();
  } else if (this->getSigned() == false)
    std::cout << "The form isn't signed yet." << std::endl;
  else
    throw Form::GradeTooLowException();
}

const int ShrubberyCreationForm::_sign = 145;
const int ShrubberyCreationForm::_exec = 137;