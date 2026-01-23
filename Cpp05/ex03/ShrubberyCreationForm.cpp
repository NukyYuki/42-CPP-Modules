/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationAForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-20 17:52:07 by mipinhei          #+#    #+#             */
/*   Updated: 2026-01-20 17:52:07 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
: AForm("ShrubberyCreationForm", 145, 137), _target("Default"){
	std::cout << "Default ShrubberyCreationForm Constructor called" <<  std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: AForm("ShrubberyCreationForm", 145, 137), _target(target){
	std::cout << "Parametized ShrubberyCreationForm Constructor called" <<  std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj), _target(obj._target)
{
	std::cout << "Copy ShrubberyCreationForm Constructor called" <<  std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	std::cout << "ShrubberyCreationForm Copy Assignment Operator called" <<  std::endl;
	if (this != &obj)
	{
		AForm::operator=(obj);
		this->_target = obj._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called" <<  std::endl;
}

std::string	ShrubberyCreationForm::getTarget() const{
	return (_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	AForm::execute(executor);
	std::ofstream file((_target + "_shrubbery").c_str());
	if (!file.is_open())
		throw AForm::FileNotOpened();
	file << "       _-_" << std::endl;
	file << "    /~~   ~~\\" << std::endl;
	file << " /~~         ~~\\" << std::endl;
	file << "{               }" << std::endl;
	file << " \\  _-     -_  /" << std::endl;
	file << "   ~  \\\\ //  ~" << std::endl;
	file << "_- -   | | _- _" << std::endl;
	file << "  _ -  | |   -_" << std::endl;
	file << "      // \\\\" << std::endl;
	file.close();
	
}

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm const &ShrubberyForm)
{
	out << "ShrubberyCreationForm Target: " << ShrubberyForm.getTarget() << std::endl;
	out << "Form: " << ShrubberyForm.getName() << std::endl;
	out << "Signed: " << ShrubberyForm.getSigned() << std::endl;
	out	<< "Sign Grade: " << ShrubberyForm.getSignedGrade() << std::endl;
	out << "Exec Grade: " << ShrubberyForm.getExecGrade() << std::endl;
	return out;
}