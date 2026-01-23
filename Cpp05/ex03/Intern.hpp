/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 11:36:08 by mipinhei          #+#    #+#             */
/*   Updated: 2026/01/23 12:07:42 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class AForm;

class Intern{
    public:
        Intern();
        Intern(const Intern &obj);
        Intern& operator=(const Intern &obj);
        ~Intern();
        
        AForm*  makeForm(std::string _FormName, std::string _TargetName);
    
        class FormNotFound : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};