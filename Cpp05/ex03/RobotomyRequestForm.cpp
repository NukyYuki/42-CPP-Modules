/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-21 09:56:24 by mipinhei          #+#    #+#             */
/*   Updated: 2026-01-21 09:56:24 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("Default"){
	std::cout << "Default RobotomyRequestForm Constructor called" <<  std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target){
	std::cout << "Parametrized RobotomyRequestForm Constructor called" <<  std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(obj), _target(obj._target){
	std::cout << "Copy RobotomyRequestForm Constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj){
	std::cout << "RobotomyRequestForm Copy Assignment Operator called" <<  std::endl;
	if (this != &obj)
	{
		AForm::operator=(obj);
		this->_target = obj._target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "RobotomyRequestForm Destructor called" <<  std::endl;
}

std::string	RobotomyRequestForm::getTarget() const{
	return (_target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	AForm::execute(executor);
	srand(time(NULL));
	int num = rand() % 2;
	if (num)
		std::cout << _target << " had been robotomized" << std::endl;
	else
		std::cout << "Robotomy has failed" << std::endl;
}

std::ostream &operator<<(std::ostream &out, RobotomyRequestForm const &RobotomyForm)
{
	out << "RobotomyRequestForm Target: " << RobotomyForm.getTarget() << std::endl;
	out << "Form: " << RobotomyForm.getName() << std::endl;
	out << "Signed: " << RobotomyForm.getSigned() << std::endl;
	out	<< "Sign Grade: " << RobotomyForm.getSignedGrade() << std::endl;
	out << "Exec Grade: " << RobotomyForm.getExecGrade() << std::endl;
	return out;
}