/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-15 11:21:53 by mipinhei          #+#    #+#             */
/*   Updated: 2026-01-15 11:21:53 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class Form{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_signedGrade;
		int const			_execGrade;
	public:
		Form();
		~Form();
		Form(const Form &obj);
		Form(std::string name, int signedGrade, int execGrade);
		Form &operator=(const Form &obj);
		std::string const	getName() const;
		bool				getSigned() const;
		int					getSignedGrade() const;
		int					getExecGrade() const;
		void				beSigned(Bureaucrat &signature);
		class GradeTooHighException : public std::exception {
    	    public:
    	        virtual const char* what() const throw();
    	};
    	class GradeTooLowException : public std::exception {
    	    public:
    	        virtual const char* what() const throw();
    	};
		class FormSigned : public std::exception {
    	    public:
    	        virtual const char* what() const throw();
    	};
};

std::ostream &operator<<(std::ostream &out, Form const &form);