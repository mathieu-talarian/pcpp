/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 14:36:40 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/09 19:13:27 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.class.hpp"

OfficeBlock::OfficeBlock() : _intern(NULL), _signer(NULL), _executor(NULL) {}

OfficeBlock::OfficeBlock(Intern *intern, Bureaucrat *signer,
        Bureaucrat *executor)
    : _intern(intern), _signer(signer), _executor(executor) {}

    OfficeBlock::~OfficeBlock() {
        //this->_intern ? delete this->_intern : (void)0;
        //this->_signer ? delete this->_signer : (void)0;
        //this->_executor ? delete this->_executor : (void)0;
    }

Intern const &OfficeBlock::getIntern(void) const { return *this->_intern; }
Bureaucrat const &OfficeBlock::getSigner(void) const { return *this->_signer; }
Bureaucrat const &OfficeBlock::getExecutor(void) const {
    return *this->_executor;
}

void OfficeBlock::setIntern(Intern &i) { this->_intern = &i; }
void OfficeBlock::setSigner(Bureaucrat &i) { this->_signer = &i; }
void OfficeBlock::setExecutor(Bureaucrat &i) { this->_executor = &i; }

void OfficeBlock::doBureaucracy(std::string name, std::string target) {
    Form *f1;
    if (this->_intern == NULL)
        throw OfficeBlock::NoIntern();
    if (this->_signer == NULL)
        throw OfficeBlock::NoSigner();
    if (this->_executor == NULL) {
        throw OfficeBlock::NoExecutor();
    }
    try {
        f1 = this->_intern->makeForm(name, target);
        f1->beSigned(*this->_signer);
        f1->execute(*this->_executor);
    } catch (Intern::FormNotFoundException &e) {
        throw Intern::FormNotFoundException(e);
    };

}

OfficeBlock::ANo::ANo() {}
OfficeBlock::ANo::ANo(ANo const &src) { *this = src; }
OfficeBlock::ANo::~ANo() throw() {}
OfficeBlock::ANo &OfficeBlock::ANo::operator=(ANo const &) { return *this; }

const char *OfficeBlock::ANo::what(const char *iret) const throw() {
    return iret;
}

const char *OfficeBlock::NoIntern::what() const throw() {
    return ("The office have no intern");
}

const char *OfficeBlock::NoExecutor::what() const throw() {
    return "The office have no executor";
}

const char *OfficeBlock::NoSigner::what() const throw() {
    return "The office have no signer";
}

const char *OfficeBlock::NoFormFound::what() const throw() {
    return "No forms found";
}
