#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
  private:
	std::string _target;

  public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &object);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &object);
	~ShrubberyCreationForm();

	void executeAction() const;
};
