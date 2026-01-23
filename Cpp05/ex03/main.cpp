/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:51:40 by mipinhei          #+#    #+#             */
/*   Updated: 2026/01/23 14:24:12 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
	try {
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		Bureaucrat bob("Bob", 1);
		bob.signAForm(*rrf);
		bob.executeForm(*rrf);
		delete rrf;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << "---------------------------------" << std::endl;
	try {
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Julius");
		Bureaucrat bob("Bob", 1);
		bob.signAForm(*rrf);
		bob.executeForm(*rrf);
		delete rrf;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << "---------------------------------" << std::endl;
	try {
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Alice");
		Bureaucrat bob("Bob", 1);
		bob.signAForm(*rrf);
		bob.executeForm(*rrf);
		delete rrf;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << "---------------------------------" << std::endl;
	try {
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("no form", "Charlie");
		Bureaucrat bob("Bob", 1);
		bob.signAForm(*rrf);
		bob.executeForm(*rrf);
		delete rrf;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	return 0;
}