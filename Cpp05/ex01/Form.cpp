/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-15 11:47:35 by mipinhei          #+#    #+#             */
/*   Updated: 2026-01-15 11:47:35 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

 Form::Form(): _name("Default"), _signed(false), _signedGrade(150), _execGrade(150){
	std::cout << "Default Form Constructor called" <<  std::endl;
}

 Form::Form(std::string name, int signedGrade, int execGrade)
 : _name(name), _signed(false), _signedGrade(signedGrade), _execGrade(execGrade)
 {
	std::cout << "Parametized Form Constructor called" <<  std::endl;
	if (signedGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	if (signedGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form(){
	std::cout << "Form Destructor called" <<  std::endl;
}

Form::Form(const Form &obj)
: _name(obj._name), _signedGrade(obj._signedGrade), _execGrade(obj._execGrade)
{
	std::cout << "Form Copy constructor called" <<  std::endl;
	*this = obj;
}

Form &Form::operator=(const Form &obj){
	std::cout << "Form Copy assignment operator called" <<  std::endl;
	if (this == &obj)
		return (*this);
	_signed = obj._signed;
	return (*this);
}

std::string const	Form::getName() const{
	return (_name);
}

bool	Form::getSigned() const {
	return (_signed);
}

int					Form::getSignedGrade() const{
	return (_signedGrade);
}

int					Form::getExecGrade() const{
	return (_execGrade);
}

const char* Form::GradeTooHighException::what() const throw(){
	return ("grade is too high");
}

const char* Form::GradeTooLowException::what() const throw(){
	return ("grade is too low");
}

const char* Form::FormSigned::what() const throw(){
	return ("form is already signed");
}

void	Form::beSigned(Bureaucrat &signature){
	if (_signed)
		throw Form::FormSigned();
	if (signature.getGrade() > _signedGrade)
		throw Form::GradeTooLowException();
	_signed = true;
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
	out << form.getName() << ", signed: " << (form.getSigned() ? "true" : "false")
		<< ", signedGrade: " << form.getSignedGrade()
		<< ", execGrade: " << form.getExecGrade();
	return out;
}