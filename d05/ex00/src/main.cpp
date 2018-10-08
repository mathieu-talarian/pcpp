/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 19:08:07 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/08 19:16:26 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

int main() {
//   Bureaucrat b;
//   try {
//     b.downGrade(1);
//   } catch (Bureaucrat::GradeTooLowException e) {
//     std::cout << e.what() << std::endl;
//   }
  Bureaucrat a("Kevin", 100);
  try {
    //a.upGrade(100);
    a.downGrade(100);
  } catch (Bureaucrat::GradeTooHighException e) {
    std::cout << e.what() << std::endl;
  } catch (Bureaucrat::GradeTooLowException e) {
    std::cout << e.what() << std::endl;
  }
}