#include "Contact.hpp"

Contact::Contact(){
}

Contact::~Contact(){
}

void	Contact::setFirstName(std::string firstName)
{
	this->FirstName = firstName;
}
void	Contact::setLastName(std::string lastName)
{
	this->LastName = lastName;
}
void	Contact::setnickName(std::string nickName)
{
	this->nickName = nickName;
}
void		Contact::setPhoneNumber(std::string PhoneNumber)
{
	this->PhoneNumber = PhoneNumber;
}

void	Contact::setdarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}
std::string	Contact::getFirstName()
{
	return(this->FirstName);
}
std::string	Contact::getLastName()
{
	return (this->LastName);
}
std::string	Contact::getNickName()
{
	return(this->nickName);
}