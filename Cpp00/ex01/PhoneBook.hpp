#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int		count;
	public:
		PhoneBook();
		~PhoneBook();
		void	contactAdd();
		void	contactSearch();
};