/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 19:08:07 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/08 22:04:47 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"

int main(void) {

  Bureaucrat Buro1 = Bureaucrat("Prof", 1);
  std::cout << Buro1;
  Bureaucrat Buro2 = Bureaucrat("Atchoum", 150);
  std::cout << Buro2;
  Bureaucrat Buro3 = Bureaucrat("Simplet", 34);
  std::cout << Buro3;

  Form Form1 = Form("Prendre l'or", 110, 40);
  std::cout << Form1;
  Form Form2(Form1);
  std::cout << Form2;
  Form Form3 = Form();
  std::cout << Form3;

  std::cout << std::endl << std::endl;
  std::cout << Buro1.getName() << " sign " << Form1.getName() << " ??"
            << std::endl;
  try {
    Buro1.signForm(Form1);
  } catch (Form::GradeTooLowException e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl
            << Form3.getName() << " be signed by " << Buro2.getName() << " ??"
            << std::endl;
  try {
    Form3.beSigned(Buro2);
  } catch (Form::GradeTooLowException e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl
            << Form2.getName() << " be signed by " << Buro3.getName() << " ??"
            << std::endl;
  try {
    Form2.beSigned(Buro3);
  } catch (Form::GradeTooLowException e) {
    std::cout << e.what() << std::endl;
  }
  return (0);
}