/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 11:36:17 by mipinhei          #+#    #+#             */
/*   Updated: 2026/01/23 13:59:05 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){
    std::cout << "Intern: Default constructor called" << std::endl;
}

Intern::Intern(const Intern &obj){
    std::cout << "Intern: Copy constructor called" << std::endl;
    *this = obj;
}

Intern& Intern::operator=(const Intern &obj){
    std::cout << "Intern: Copy assignment operator called" << std::endl;
    if (this == &obj)
        return (*this);
    (void)obj;
    return (*this);
}

Intern::~Intern(){
    std::cout << "Intern: Destructor called" << std::endl;
}

 AForm*  Intern::makeForm(std::string _FormName, std::string _TargetName){	
    AForm *forms[3] = {new ShrubberyCreationForm(_TargetName), new RobotomyRequestForm(_TargetName), new PresidentialPardonForm(_TargetName)};
	
    std::string	FormNames[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    
    for (int i = 0; i < 3; i++)
	{
		if (_FormName == FormNames[i])
		{
            std::cout << "Intern creates " << FormNames[i] << " form." << std::endl;
            for (int j = 0; j < 3; j++)
            {
                if (j != i)
                    delete forms[j];
            }
			return (forms[i]);
		}
    }
    std::cout << "Intern cannot create " << _FormName << std::endl;
    for (int i = 0; i < 3; i++)
        delete forms[i];
    throw Intern::FormNotFound();
}

const char* Intern::FormNotFound::what() const throw(){
    return ("Intern: Form not found");
}