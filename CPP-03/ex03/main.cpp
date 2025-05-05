#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap bot("bot");
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
	// bot.guardGate();
	bot.highFivesGuys();
	bot.takeDamage(500);
	// bot.takeDamage(5);
	bot.beRepaired(3);
	bot.takeDamage(5);
	bot.beRepaired(3);
}