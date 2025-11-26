#include <string>
#include <iostream>

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string nickName;
		std::string	PhoneNumber;
		std::string darkestSecret;
	public:
		Contact();
		~Contact();
		void		setFirstName(std::string firstName);
		void		setLastName(std::string lastName);
		void		setnickName(std::string nickName);
		void		setPhoneNumber(std::string PhoneNumber);
		void		setdarkestSecret(std::string darkestSecret);
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
};