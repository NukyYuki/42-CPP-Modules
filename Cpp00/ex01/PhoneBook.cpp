/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:22:11 by mipinhei          #+#    #+#             */
/*   Updated: 2025/12/17 16:17:50 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->count = 0;
}

PhoneBook::~PhoneBook(){
}
std::string	cutString(std::string cut)
{
	if (cut.length() > 10)
		return (cut.substr(0, 9) + ".");
	else
		return (cut);
}

void	PhoneBook::contactAdd()
{
	std::string FirstName;
	std::string LastName;
	std::string nickName;
	std::string	PhoneNumber;
	std::string darkestSecret;

	std::cout << "Enter Contact: First Name " << "\n";
	std::getline(std::cin, FirstName);
	std::cout << "Enter Contact: Last Name " << "\n";
	std::getline(std::cin, LastName);
	std::cout << "Enter Contact: NickName " << "\n";
	std::getline(std::cin, nickName);
	std::cout << "Enter Contact: Phone Number " << "\n";
	std::getline(std::cin, PhoneNumber);
	std::cout << "Enter Contact: Darkest Secret " << "\n";
	std::getline(std::cin, darkestSecret);

	if (FirstName.empty() || LastName.empty() || nickName.empty() || PhoneNumber.empty() || darkestSecret.empty())
	{
		std::cout << "Invalid input: All fields must be filled" << "\n";
		return ;
	}
	int position = this->count % 8;
	this->contacts[position].setFirstName(FirstName);
	this->contacts[position].setLastName(LastName);
	this->contacts[position].setnickName(nickName);
	this->contacts[position].setPhoneNumber(PhoneNumber);
	this->contacts[position].setdarkestSecret(darkestSecret);
	this->count++;
}

void	PhoneBook::contactSearch()
{
	int total = (this->count > 8) ? 8 : this->count;
	for (int i = 0; i < total; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << cutString(this->contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << cutString(this->contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << cutString(this->contacts[i].getNickName()) << std::endl;
	}
	std::string index;
	std::cout << "Input the index you want to see: ";
	std::getline(std::cin, index);
	total = (this->count > 8) ? 8 : this->count;
	if (index.length() == 1 && index[0] >= '0' && index[0] <= '7' && (index[0] - '0' < total))
	{
		int pos = index[0] - '0';
		std::cout << "First Name: " << this->contacts[pos].getFirstName() << std::endl;
		std::cout << "Last Name: " <<this->contacts[pos].getLastName() << std::endl;
		std::cout << "Nickname: " << this->contacts[pos].getNickName() << std::endl;
	}
	else
		std::cout << "Invalid Contact Index" << std::endl;
}
