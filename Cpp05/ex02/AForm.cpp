/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-15 11:47:35 by mipinhei          #+#    #+#             */
/*   Updated: 2026-01-15 11:47:35 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

 AForm::AForm(): _name("Default"), _signed(false), _signedGrade(150), _execGrade(150){
	std::cout << "Default AForm Constructor called" <<  std::endl;
}

 AForm::AForm(std::string name, int signedGrade, int execGrade)
 : _name(name), _signed(false), _signedGrade(signedGrade), _execGrade(execGrade)
 {
	std::cout << "Parametized AForm Constructor called" <<  std::endl;
	if (signedGrade < 1 || execGrade < 1)
		throw AForm::GradeTooHighException();
	if (signedGrade > 150 || execGrade > 150)
		throw AForm::GradeTooLowException();
}

AForm::~AForm(){
	std::cout << "AForm Destructor called" <<  std::endl;
}

AForm::AForm(const AForm &obj)
: _name(obj._name), _signedGrade(obj._signedGrade), _execGrade(obj._execGrade)
{
	std::cout << "AForm Copy constructor called" <<  std::endl;
	*this = obj;
}

AForm &AForm::operator=(const AForm &obj){
	std::cout << "AForm Copy assignment operator called" <<  std::endl;
	if (this == &obj)
		return (*this);
	_signed = obj._signed;
	return (*this);
}

std::string const	AForm::getName() const{
	return (_name);
}

bool	AForm::getSigned() const {
	return (_signed);
}

int					AForm::getSignedGrade() const{
	return (_signedGrade);
}

int					AForm::getExecGrade() const{
	return (_execGrade);
}

const char* AForm::GradeTooHighException::what() const throw(){
	return ("grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw(){
	return ("grade is too low");
}

const char* AForm::AFormSigned::what() const throw(){
	return ("AForm is already signed");
}

void	AForm::beSigned(Bureaucrat &signature){
	if (_signed)
		throw AForm::AFormSigned();
	if (signature.getGrade() > _signedGrade)
		throw AForm::GradeTooLowException();
	_signed = true;
}

std::ostream &operator<<(std::ostream &out, AForm const &AForm)
{
	out << AForm.getName() << ", signed: " << (AForm.getSigned() ? "true" : "false")
		<< ", signedGrade: " << AForm.getSignedGrade()
		<< ", execGrade: " << AForm.getExecGrade();
	return out;
}