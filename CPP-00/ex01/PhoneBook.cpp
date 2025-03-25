#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0), contact_count(0){};

void PhoneBook::add_contact(std::string first_name, std::string last_name,
	std::string nickname, std::string darkest_secret, std::string phone_number)
{
	if (index >= MAX_CONTACTS)
	{
		index = 0;
	}
	contacts[index].setfirstname(first_name);
	contacts[index].setlastname(last_name);
	contacts[index].setnickname(nickname);
	contacts[index].setdarkest_secret(darkest_secret);
	contacts[index].setphonenumber(phone_number);
	if (contact_count < MAX_CONTACTS)
		contact_count += 1;
	else
		std::cout << "Now will rewrite old contacts" << std::endl;
	index++;
}

void	printColumn(std::string str)
{
	int	spaces;

	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
	{
		spaces = 10 - str.length();
		for (int i = 0; i < spaces; i++)
			std::cout << " ";
		std::cout << str;
	}
}

void PhoneBook::display_contact_table()
{
	std::cout << "     Index| First Name|  Last Name|  Nickname \n";
	std::cout << "----------------------------------------------\n";
	if (contact_count == 0)
	{
		std::cout << "No contacts available.\n";
		return ;
	}
	for (int i = 0; i < contact_count; i++)
	{
		std::cout << "         " << i + 1 << "| ";
		printColumn(contacts[i].getfirstname());
		std::cout << "| ";
		printColumn(contacts[i].getlastname());
		std::cout << "| ";
		printColumn(contacts[i].getnickname());
		std::cout << "\n";
	}
}

void PhoneBook::search_contact(int index)
{
	if (index >= contact_count)
	{
		std::cout << "Contact with that index, not created yet" << std::endl;
		return ;
	}
	std::cout << "First name: " << contacts[index].getfirstname() << std::endl;
	std::cout << "Last name: " << contacts[index].getlastname() << std::endl;
	std::cout << "Nickname: " << contacts[index].getnickname() << std::endl;
	std::cout << "Darkest Secret: " << contacts[index].getdarkest_secret() << std::endl;
	std::cout << "Phone Number: " << contacts[index].getphonenumber() << std::endl;
}
