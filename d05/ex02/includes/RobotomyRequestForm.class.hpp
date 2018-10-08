/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.hpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 22:48:53 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/08 23:06:05 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
#define ROBOTOMYREQUESTFORM_CLASS_HPP

#include "Form.class.hpp"
#include "Bureaucrat.class.hpp"

class RobotomyRequestForm : public Form {
public:
    RobotomyRequestForm(void);

    RobotomyRequestForm(std::string target);

    RobotomyRequestForm(RobotomyRequestForm const &src);

    ~RobotomyRequestForm();

    void execute(Bureaucrat const &executor) const;

    RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

private:
    static const int _sign;
    static const int _exec;
};

#endif // !ROBOTOMYREQUESTFORM_CLASS_HPP