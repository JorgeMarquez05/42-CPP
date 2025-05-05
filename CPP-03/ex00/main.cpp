#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap bot("bot");
	bot.attack("Enemy");
	bot.attack("Enemy");
	bot.attack("Enemy");
	bot.attack("Enemy");
	bot.attack("Enemy");
	bot.attack("Enemy");
	bot.attack("Enemy");
	bot.attack("Enemy");
	bot.attack("Enemy");
	// bot.attack("Enemy");
	// bot.attack("Enemy");

	bot.takeDamage(5);
	// bot.takeDamage(5);
	bot.beRepaired(3);
	bot.takeDamage(5);
	bot.beRepaired(3);
}