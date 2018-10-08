/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.hpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 23:16:40 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/08 23:39:33 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_CLASS_HPP
#define PRESIDENTIALPARDONFORM_CLASS_HPP

#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"

class PresidentialPardonForm : public Form {
public:
  PresidentialPardonForm(void);

  PresidentialPardonForm(std::string target);

  PresidentialPardonForm(const PresidentialPardonForm &src);

  ~PresidentialPardonForm(void);

  PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);

  void execute(const Bureaucrat &executor) const;

private:
  static const int _sign;
  static const int _exec;
};

#endif // !PRESIDENTIALPARDONFORM_CLASS_HPP