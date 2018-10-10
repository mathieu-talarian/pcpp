/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:53:33 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/08 23:21:49 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
#define BUREAUCRAT_CLASS_HPP

#include "Form.class.hpp"
#include <iostream>

class Form;

class Bureaucrat {
public:
    Bureaucrat();

    Bureaucrat(std::string name, int grade);

    Bureaucrat(const Bureaucrat &);

    Bureaucrat &operator=(const Bureaucrat &);

    void upGrade(int const);

    void downGrade(int const);

    ~Bureaucrat();

    std::string getName() const;

    int getGrade() const;

    void signForm(Form &);

    void executeForm(Form const &);

    class GradeTooHighException : public std::exception {
    public:
        GradeTooHighException();

        GradeTooHighException(GradeTooHighException const &);

        ~GradeTooHighException() throw();

        GradeTooHighException &operator=(GradeTooHighException const &);

        virtual const char *what() const throw();
    };

    class GradeTooLowException {
    public:
        GradeTooLowException();

        GradeTooLowException(GradeTooLowException const &);

        ~GradeTooLowException() throw();

        GradeTooLowException &operator=(GradeTooLowException const &);

        virtual const char *what() const throw();
    };

private:
    std::string const _name;
    int _grade;
};

std::ostream &operator<<(std::ostream &, Bureaucrat const &);

#endif // !BUREAUCRAT_CLASS_HPP