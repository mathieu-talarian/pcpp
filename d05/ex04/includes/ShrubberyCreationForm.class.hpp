/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.hpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 22:09:48 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/08 22:52:09 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_CLASS_HPP
#define SHRUBBERYCREATIONFORM_CLASS_HPP

#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"
#include <iostream>

class ShrubberyCreationForm : public Form {
public:
    ShrubberyCreationForm(void);

    ShrubberyCreationForm(std::string target);

    ShrubberyCreationForm(ShrubberyCreationForm const &src);

    void execute(Bureaucrat const &executor) const;

    ~ShrubberyCreationForm();

    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

private:
    static const int _sign;
    static const int _exec;
};

#endif // !SHRUBBERYCREATIONFORM_CLASS_HPP