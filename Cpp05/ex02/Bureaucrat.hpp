/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 15:33:19 by mipinhei          #+#    #+#             */
/*   Updated: 2026/01/13 17:10:02 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>

class Form;

class Bureaucrat{
  private:
      std::string   _name;
      int           _grade;
public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat &obj);
    Bureaucrat(const std::string name, const int grade);
    Bureaucrat &operator=(const Bureaucrat &obj);
    std::string const getName() const;
    int         getGrade() const;
    void        setName(std::string name);
    void        setGrade(int grade);
    void        incrementGrade();
    void        decrementGrade();
    void        signForm(Form &form);
    class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw();
    };
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);