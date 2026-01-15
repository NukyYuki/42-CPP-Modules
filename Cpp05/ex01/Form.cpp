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

 Form::Form(): _name("Default"), _signed(false), _signedGrade(150), _execGrade(150){
	std::cout << "Default Form Constructor called" <<  std::endl;
}

 Form::Form(std::string name, int signedGrade, int execGrade)
 : _name(name), _signed(false), _signedGrade(signedGrade), _execGrade(execGrade)
 {
	std::cout << "Parametized Form Constructor called" <<  std::endl;
	if (signedGrade < 1 || execGrade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (signedGrade > 150 || execGrade > 150)
		throw Bureaucrat::GradeTooLowException();
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

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return ("Highest Grade Reached\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return ("Lowest Grade Reached\n");
}