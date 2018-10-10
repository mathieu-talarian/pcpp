/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 19:08:07 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/09 19:16:20 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"
#include "Intern.class.hpp"
#include "OfficeBlock.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"

int main() {
  Intern idiotOne;
  Bureaucrat hermes = Bureaucrat("Hermes Conrad", 150);
  Bureaucrat bob = Bureaucrat("Bobby Bobson", 150);
  OfficeBlock ob;
  ob.setIntern(idiotOne);
  ob.setSigner(bob);
  ob.setExecutor(hermes);
  try {
    ob.doBureaucracy("mutant pig", "Pigley");
  } catch (Intern::FormNotFoundException &e) {
    std::cout << e.what() << std::endl;
  } catch (Form::GradeTooLowException &e) {
    std::cout << e.what() << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  try {
    ob.doBureaucracy("PresidentialPardonForm", "Simplet");
  } catch (Intern::FormNotFoundException &e) {
    std::cout << e.what() << std::endl;
  } catch (Form::GradeTooLowException &e) {
    std::cout << e.what() << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  hermes = Bureaucrat("Hermes Conrad", 150);
  bob = Bureaucrat("Bobby Bobson", 1);
  try {
    ob.doBureaucracy("robotomy request", "Simplet");
  } catch (Intern::FormNotFoundException &e) {
    std::cout << e.what() << std::endl;
  } catch (Form::GradeTooLowException &e) {
    std::cout << e.what() << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
    hermes = Bureaucrat("Hermes Conrad", 1);
  bob = Bureaucrat("Bobby Bobson", 1);
  try {
    ob.doBureaucracy("robotomy request", "Simplet");
  } catch (Intern::FormNotFoundException &e) {
    std::cout << e.what() << std::endl;
  } catch (Form::GradeTooLowException &e) {
    std::cout << e.what() << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}
