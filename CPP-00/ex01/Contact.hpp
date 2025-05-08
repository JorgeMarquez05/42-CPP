#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <cstdlib>
# include <iostream>

class Contact
{
  private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string darkest_secret;
	std::string phone_number;

  public:
	Contact();

	void setfirstname(std::string f_name);
	void setlastname(std::string l_name);
	void setnickname(std::string n_name);
	void setdarkest_secret(std::string d_secret);
	void setphonenumber(std::string p_number);

	std::string getfirstname();
	std::string getlastname();
	std::string getnickname();
	std::string getdarkest_secret();
	std::string getphonenumber();
};

#endif