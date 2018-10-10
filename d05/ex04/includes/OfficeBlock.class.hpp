/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 14:36:55 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/09 17:49:46 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_CLASS_HPP
#define OFFICEBLOCK_CLASS_HPP

#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"
#include "Intern.class.hpp"

class OfficeBlock {
    public:
        OfficeBlock();
        OfficeBlock(Intern *, Bureaucrat *, Bureaucrat *);
        ~OfficeBlock();

        Intern const &getIntern(void) const;
        Bureaucrat const &getSigner(void) const;
        Bureaucrat const &getExecutor(void) const;

        void setIntern(Intern &);
        void setSigner(Bureaucrat &);
        void setExecutor(Bureaucrat &);

        void doBureaucracy(std::string, std::string);
        class ANo : public std::exception {
            public:
                ANo();
                ANo(ANo const &);
                ~ANo() throw();
                ANo &operator=(ANo const &);
                virtual const char *what() const throw() = 0;
                virtual const char *what(const char *) const throw();
        };
        class NoIntern : public OfficeBlock::ANo {
            public:
                const char *what() const throw();
        };
        class NoSigner : public OfficeBlock::ANo {
            public:
                const char *what() const throw();
        };
        class NoExecutor : public OfficeBlock::ANo {
            public:
                const char *what() const throw();
        };
        class NoFormFound : public OfficeBlock::ANo {
            public:
                const char *what() const throw();
        }; 

    private:
        Intern *_intern;
        Bureaucrat *_signer;
        Bureaucrat *_executor;
};

#endif // !OFFICEBLOCK_CLASS_HPP
