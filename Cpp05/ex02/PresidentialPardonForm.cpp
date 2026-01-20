/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-20 18:02:13 by mipinhei          #+#    #+#             */
/*   Updated: 2026-01-20 18:02:13 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
: AForm("PresidentialPardonForm", 25, 5), _target("Default")
{
	std::cout << "Default PresidentialPardonForm Constructor called" <<  std::endl;
}

std::ostream &operator<<(std::ostream &out, PresidentialPardonForm const &PresidentialPardonForm)
{

}