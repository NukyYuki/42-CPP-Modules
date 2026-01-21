/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-21 09:32:29 by mipinhei          #+#    #+#             */
/*   Updated: 2026-01-21 09:32:29 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm : AForm{
	private:
		std::string	_target;
	public:
		RobotomyRequestForm();
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &obj);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);

		std::string			getTarget() const;

		void				beSigned(Bureaucrat &signature);
		void				execute(Bureaucrat const & executor) const;
}