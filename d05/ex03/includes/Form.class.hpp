/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 19:17:40 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/09 12:40:26 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_HPP
#define FORM_CLASS_HPP

#include "Bureaucrat.class.hpp"
#include <iostream>

class Bureaucrat;

class Form {
    public:
        Form();

        Form(std::string, int, int);

        Form(std::string, std::string, int, int);

        Form(const Form &);

        Form &operator=(const Form &);

        virtual ~Form();

        std::string getName() const;

        std::string getTarget(void) const;

        bool getSigned() const;

        int getSign() const;

        int getExec() const;

        void setTarget(std::string);

        virtual void execute(const Bureaucrat &) const = 0;

        class GradeTooHighException : public std::exception {
            public:
                GradeTooHighException();

                GradeTooHighException(GradeTooHighException const &);

                ~GradeTooHighException() throw();

                GradeTooHighException &operator=(GradeTooHighException const &);

                virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                GradeTooLowException();

                GradeTooLowException(GradeTooLowException const &);

                ~GradeTooLowException() throw();

                GradeTooLowException &operator=(GradeTooLowException const &);

                virtual const char *what() const throw();
        };

        void beSigned(Bureaucrat &);

        void setSigned();

    private:
        std::string const _name;
        std::string _target;
        bool _signed;
        int const _sign; // grade to sign it
        int const _exec; // grade to execute it
};

std::ostream &operator<<(std::ostream &, Form const &);

#endif // !FORM_CLASS_HPP
