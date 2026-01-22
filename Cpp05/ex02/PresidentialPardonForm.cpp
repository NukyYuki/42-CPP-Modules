/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-20 18:02:13 by mipinhei          #+#    #+#             */
/*   Updated: 2026-01-20 18:02:13 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
: AForm("PresidentialPardonForm", 25, 5), _target("Default")
{
	std::cout << "Default PresidentialPardonForm Constructor called" <<  std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "Parametrized PresidentialPardonForm Constructor called" <<  std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
: AForm(obj), _target(obj._target)
{
	std::cout << "Copy PresidentialPardonForm Constructor called" <<  std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	std::cout << "PresidentialPardonForm Copy Assignment Operator called" <<  std::endl;
	if (this != &obj)
	{
		AForm::operator=(obj);
		this->_target = obj._target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called" <<  std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
	return this->_target;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	AForm::execute(executor);
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}



std::ostream &operator<<(std::ostream &out, PresidentialPardonForm const &PresidentialForm)
{
	out << "PresidentialPardonForm Target: " << PresidentialForm.getTarget() << std::endl;
	out << "Form: " << PresidentialForm.getName() << std::endl;
	out << "Signed: " << PresidentialForm.getSigned() << std::endl;
	out	<< "Sign Grade: " << PresidentialForm.getSignedGrade() << std::endl;
	out << "Exec Grade: " << PresidentialForm.getExecGrade() << std::endl;
	return out;
}