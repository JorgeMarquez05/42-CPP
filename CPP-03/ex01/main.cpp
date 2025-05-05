#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap bot("bot");
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
	bot.guardGate();
	bot.takeDamage(500);
	// bot.takeDamage(5);
	bot.beRepaired(3);
	bot.takeDamage(5);
	bot.beRepaired(3);
}