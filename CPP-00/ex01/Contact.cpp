// #include "phonebook.hpp"
#include "Contact.hpp"

Contact::Contact(){};

void Contact::setfirstname(std::string f_name)
{
	first_name = f_name;
}

void Contact::setlastname(std::string l_name)
{
	last_name = l_name;
}

void Contact::setnickname(std::string n_name)
{
	nickname = n_name;
}

void Contact::setdarkest_secret(std::string d_secret)
{
	darkest_secret = d_secret;
}

void Contact::setphonenumber(std::string p_number)
{
	phone_number = p_number;
}

std::string Contact::getfirstname()
{
	return (first_name);
}

std::string Contact::getlastname()
{
	return (last_name);
}

std::string Contact::getnickname()
{
	return (nickname);
}

std::string Contact::getdarkest_secret()
{
	return (darkest_secret);
}

std::string Contact::getphonenumber()
{
	return (phone_number);
}
