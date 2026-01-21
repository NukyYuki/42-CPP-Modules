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

std::string	RobotomyRequestForm::getTarget() const{
	return (_target);
}