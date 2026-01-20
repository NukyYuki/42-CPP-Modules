/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationAForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-20 17:51:15 by mipinhei          #+#    #+#             */
/*   Updated: 2026-01-20 17:51:15 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm {
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm();
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &obj);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);
		void				beSigned(Bureaucrat &signature);
		void				execute(Bureaucrat const & executor) const;
		class FileNotOpenException : public std::exception {
	 	    public:
	 	        virtual const char* what() const throw();
	 	};
};

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm const &ShrubberyForm);