/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
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

class AForm{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_signedGrade;
		int const			_execGrade;
	public:
		AForm();
		virtual ~AForm();
		AForm(const AForm &obj);
		AForm(std::string name, int signedGrade, int execGrade);
		AForm &operator=(const AForm &obj);
		std::string const	getName() const;
		bool				getSigned() const;
		int					getSignedGrade() const;
		int					getExecGrade() const;

		void				beSigned(Bureaucrat &signature);
		virtual void		execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::exception {
    	    public:
    	        virtual const char* what() const throw();
    	};
    	class GradeTooLowException : public std::exception {
    	    public:
    	        virtual const char* what() const throw();
    	};
		class AFormSigned : public std::exception {
    	    public:
    	        virtual const char* what() const throw();
    	};
		class AFormNotSigned : public std::exception {
    	    public:
    	        virtual const char* what() const throw();
    	};
		class FileNotOpened : public std::exception {
    	    public:
    	        virtual const char* what() const throw();
    	};
};

std::ostream &operator<<(std::ostream &out, AForm const &AForm);