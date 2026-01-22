/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-22 15:51:40 by mipinhei          #+#    #+#             */
/*   Updated: 2026-01-22 15:51:40 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	{
		std::cout << "Test 1" << std::endl;
		std::cout << "Failed Tests" << std::endl;
		Bureaucrat *bureaucrat = new Bureaucrat("Daniel", 150);
		std::cout << *bureaucrat << std::endl;
		ShrubberyCreationForm *shrubbery = new ShrubberyCreationForm("Home");
		std::cout << *shrubbery << std::endl;
		bureaucrat->signAForm(*shrubbery);
		bureaucrat->executeForm(*shrubbery);
		RobotomyRequestForm *robotomy = new RobotomyRequestForm("Home");
		std::cout << *robotomy << std::endl;
		bureaucrat->signAForm(*robotomy);
		bureaucrat->executeForm(*robotomy);
		PresidentialPardonForm *presidential = new PresidentialPardonForm("Home");
		std::cout << *presidential << std::endl;
		bureaucrat->signAForm(*presidential);
		bureaucrat->executeForm(*presidential);
		delete bureaucrat;
		delete shrubbery;
		delete robotomy;
		delete presidential;
		std::cout << std::endl;
	}
	{
		std::cout << "------Test 2------" << std::endl;
		std::cout << "------Sucessuful Test------" << std::endl;
		Bureaucrat *bureaucrat = new Bureaucrat("Daniel", 1);
		std::cout << *bureaucrat << std::endl;
		std::cout << std::endl;
		ShrubberyCreationForm *shrubbery = new ShrubberyCreationForm("Home");
		std::cout << *shrubbery << std::endl;
		std::cout << std::endl;
		bureaucrat->signAForm(*shrubbery);
		bureaucrat->executeForm(*shrubbery);
		std::cout << std::endl;
		std::cout << *shrubbery << std::endl;
		std::cout << std::endl;
		
		RobotomyRequestForm *robotomy = new RobotomyRequestForm("Bot Robot");
		std::cout << *robotomy << std::endl;
		std::cout << std::endl;
		bureaucrat->signAForm(*robotomy);
		bureaucrat->executeForm(*robotomy);
		std::cout << std::endl;
		std::cout << *robotomy << std::endl;
		std::cout << std::endl;
		PresidentialPardonForm *presidential = new PresidentialPardonForm("Daniel");
		std::cout << *presidential << std::endl;
		std::cout << std::endl;
		bureaucrat->signAForm(*presidential);
		bureaucrat->executeForm(*presidential);
		std::cout << std::endl;
		delete bureaucrat;
		delete shrubbery;
		delete robotomy;
		delete presidential;
		std::cout << std::endl;
	}
}