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

std::string const Bureaucrat::getName(){
    return (_name);
}

int Bureaucrat::getGrade(){
    return (_grade);
}

void Bureaucrat::setName(std::string name){
    _name = name;
}

void Bureaucrat::setGrade(int grade){
    try
    {
        if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        _grade = grade;
    }
}

void Bureaucrat::incrementGrade(){
   setGrade(_grade--);
}

void Bureaucrat::decrementGrade(){
    try {
        if (_grade < 150)
            setGrade(_grade++);
        throw (this->GradeTooLowException());
    }
    catch (std::string lowgrade)
    {
        std::cout << 
    }
}


std::string    Bureaucrat::GradeTooHighException(){
    return  ("Highest Grade Reached\n");
}

std::string    Bureaucrat::GradeTooLowException(){
    return  ("Lowest Grade Reached\n");
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
    std::cout << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return (out);
}