/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.cpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 23:17:57 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/09 00:08:57 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.class.hpp"
#include "Bureaucrat.class.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
    : Form("Presidential", "undefined", PresidentialPardonForm::_sign,
           PresidentialPardonForm::_exec) {
  return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : Form("Presidential", target, PresidentialPardonForm::_sign,
           PresidentialPardonForm::_exec) {
  return;
}

PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm &cpy)
    : Form(cpy.getName(), cpy.getTarget(), cpy.getSign(), cpy.getExec()) {
  *this = cpy;
  return;
}

PresidentialPardonForm::~PresidentialPardonForm(void) { return; }

PresidentialPardonForm &PresidentialPardonForm::
operator=(const PresidentialPardonForm &cpy) {
  if (this != &cpy) {
  }
  return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
  if (executor.getGrade() <= 5 && this->getSigned() == true)
    std::cout << this->getTarget() << " has been pardonned by Zafod Beeblebrox."
              << std::endl;
  else if (this->getSigned() == false)
    std::cout << "The form isn't signed yet." << std::endl;
  else
    throw Form::GradeTooLowException();
}

const int PresidentialPardonForm::_sign = 25;
const int PresidentialPardonForm::_exec = 5;