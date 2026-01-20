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

ShrubberyCreationForm::ShrubberyCreationForm()
: AForm("ShrubberyCreationForm", 145, 137), _target("Default"){
	std::cout << "Default ShrubberyCreationForm Constructor called" <<  std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: AForm("ShrubberyCreationForm", 145, 137), _target(target){
	std::cout << "Parametized ShrubberyCreationForm Constructor called" <<  std::endl;
}

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm const &ShrubberyForm){
	out << "Form Name: " << ShrubberyForm.getName() << ", Sign Grade: " << ShrubberyForm.getSignGrade()
		<< ", Execute Grade: " << ShrubberyForm.getExecuteGrade() << ", Is Signed: " << ShrubberyForm.getIsSigned() << std::endl;
	return out;
}