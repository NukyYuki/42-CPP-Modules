/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 15:33:28 by mipinhei          #+#    #+#             */
/*   Updated: 2026/01/13 17:17:01 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

 Bureaucrat::Bureaucrat(){
    std::cout << "Default Bureaucrat Constructor called" << std::endl;
}

 Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
 {
    std::cout << "Parametized Bureaucrat Constructor called" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj): _name(obj._name)
{
    std::cout << "Bureaucrat Copy constructor called" << std::endl;
    *this = obj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj){
    std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
    if (this == &obj)
        return (*this);
    _name = obj._name;
    _grade = obj._grade;
    return (*this);
}

std::string const Bureaucrat::getName() const {
    return (_name);
}

int Bureaucrat::getGrade() const {
    return (_grade);
}

void Bureaucrat::setName(std::string name){
    _name = name;
}

void Bureaucrat::setGrade(int grade){
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade = grade;
}

void Bureaucrat::incrementGrade(){
    setGrade(_grade - 1);
}

void Bureaucrat::decrementGrade(){
    setGrade(_grade + 1);
}


const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return "grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return "grade is too low";
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return (out);
}