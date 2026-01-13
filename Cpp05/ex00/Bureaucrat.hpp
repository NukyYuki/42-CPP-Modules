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
    std::string const getName();
    int         getGrade();
    void        setName(std::string name);
    void        setGrade(int grade);
    void        incrementGrade();
    void        decrementGrade();
    std::string GradeTooHighException();
    std::string GradeTooLowException();
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);