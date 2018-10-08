/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 19:08:07 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/09 00:34:26 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"
#include "Intern.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"

int main(void) {
  Bureaucrat b("Kevin", 1);

  Intern i;
  Form *f1 = i.makeForm("robotomy request", "Grincheux");
  Form *f2 = i.makeForm("presidential pardon", "Dormeur");
  Form *f3 = i.makeForm("shrubbery creation", "Timide");

  try {
    b.signForm(*f1);
    b.signForm(*f2);
    b.signForm(*f3);

    b.executeForm(*f1);
    b.executeForm(*f2);
    b.executeForm(*f3);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  return (0);
}