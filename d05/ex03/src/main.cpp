/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 19:08:07 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/09 17:22:55 by mmoullec         ###   ########.fr       */
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

    //Form *f1 = NULL;
    //Form *f2 = NULL;
    //Form *f3 = NULL;

    try {
        Form *f1 = i.makeForm("presidential pardon", "Dormeur");
        b.signForm(*f1);
        b.executeForm(*f1);
    } catch (Intern::FormNotFoundException &e) {
        std::cout << e.what() << std::endl;
    }
    // Form *f4;
    // try {
    //   f4 = i.makeForm("shruy creation", "Timide");
    // } catch (Intern::FormNotFoundException &e) {
    //   std::cout << e.what() << std::endl;
    // }
    // std::cout << f4 << std::endl;
    // try {
    //   b.signForm(*f1);
    // b.signForm(*f2);
    // b.signForm(*f3);

    //    b.executeForm(*f1);
    //  b.executeForm(*f2);
    // b.executeForm(*f3);
//} catch (std::exception &e) {
  //  std::cout << e.what() << std::endl;
//}

return (0);
}
