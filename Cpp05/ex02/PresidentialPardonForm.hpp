/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentiialPardonForm.hpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-20 18:00:20 by mipinhei          #+#    #+#             */
/*   Updated: 2026-01-20 18:00:20 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm {
	private:
		std::string	_target;
	public:
		PresidentialPardonForm();
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &obj);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
		void				beSigned(Bureaucrat &signature);
		void				execute(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &out, PresidentialPardonForm const &PresidentialPardonForm);