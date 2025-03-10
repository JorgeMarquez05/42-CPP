#include "phonebook.hpp"

int	not_valid_pnumber(std::string phone_number)
{
	int	i;

	i = 0;
	while (phone_number.c_str() && phone_number[i])
	{
		if (!std::isdigit(phone_number[i]))
			return (1);
		i++;
	}
	return (0);
}

int	prompt_user_input(std::string text, std::string &varible)
{
	std::cout << text;
	std::getline(std::cin, varible);
	if (std::cin.eof())
		return (-1);
	return (0);
}

void	create_new_contact(Phonebook &p_book)
{
	std::string first_name, last_name, nickname, darkest_secret, phone_number;
	if (prompt_user_input("Enter First Name: ", first_name))
		return ;
	if (prompt_user_input("Enter Last Name: ", last_name))
		return ;
	if (prompt_user_input("Enter Nickname: ", nickname))
		return ;
	if (prompt_user_input("Enter Darkest Secret: ", darkest_secret))
		return ;
	while (true)
	{
		if (prompt_user_input("Enter Phone Number: ", phone_number))
			return ;
		if (!not_valid_pnumber(phone_number))
			break ;
		std::cout << "Enter valid phone number" << std::endl;
	}
	p_book.add_contact(first_name, last_name, nickname, darkest_secret,
		phone_number);
	std::cout << "Contact added successfully!" << std::endl;
}

int	select_index(void)
{
	int	index;

	std::string input;
	while (true)
	{
		if (prompt_user_input("Which index?", input))
			break ;
		try
		{
			index = std::stoi(input);
			if (index >= 1 && index <= 8)
				return (index);
			std::cout << "Enter a valid index (1-8)" << std::endl;
		}
		catch (const std::exception &)
		{
			std::cout << "Put a valid digit" << std::endl;
		}
	}
	return (-1);
}

void	search_for_contact(Phonebook &p_book)
{
	int	index;

	p_book.display_contact_table();
	index = select_index();
	if (index == -1)
		return ;
	p_book.search_contact(index - 1);
}

int	main(void)
{
	Phonebook	p_book;

	std::string input;
	while (true)
	{
		std::cout << "Options ADD, SEARCH, EXIT" << std::endl;
		if (prompt_user_input("Enter your choice: ", input))
			break ;
		if (!input.compare("EXIT") || std::cin.eof())
			break ;
		else if (!input.compare("ADD"))
			create_new_contact(p_book);
		else if (!input.compare("SEARCH"))
			search_for_contact(p_book);
		else
			std::cout << "Invalid option. Please enter a valid option" << std::endl;
		if (std::cin.eof())
			break ;
	}
	std::cout << "Exiting phonebook" << std::endl;
	return (0);
}
