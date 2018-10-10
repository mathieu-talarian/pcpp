/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 22:50:43 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/09 19:09:19 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.class.hpp"
#include <curses.h>
RobotomyRequestForm::RobotomyRequestForm(void)
    : Form("Robotomy", "robotomy", RobotomyRequestForm::_sign,
           RobotomyRequestForm::_exec) {
  srand(time(NULL));
  return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : Form("Robotomy", target, RobotomyRequestForm::_sign,
           RobotomyRequestForm::_exec) {
  srand(time(NULL));
  return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy)
    : Form(cpy.getName(), cpy.getTarget(), cpy.getSign(), cpy.getExec()) {
  srand(time(NULL));
  *this = cpy;
  return;
}

RobotomyRequestForm::~RobotomyRequestForm(void) { return; }

RobotomyRequestForm &RobotomyRequestForm::
operator=(const RobotomyRequestForm &cpy) {
  if (this != &cpy) {
  }
  return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
  if (executor.getGrade() <= 45 && this->getSigned() == true) {
    initscr();
    raw();
    timeout(0);
    noecho();
    curs_set(0);
    beep();
    flash();
    refresh();
    endwin();
    if (rand() % 2 == 0)
      std::cout << this->getTarget() << " has been robotomized successfully."
                << std::endl;
    else
      std::cout << "It's a failure." << std::endl;
  } else if (this->getSigned() == false)
    std::cout << "The form isn't signed yet." << std::endl;
  else
    throw Form::GradeTooLowException();
}

const int RobotomyRequestForm::_sign = 72;
const int RobotomyRequestForm::_exec = 45;
