#include "Zombie.hpp"

Zombie* newZombie( std::string name );

void	randomChump(std::string name)
{
	Zombie *newzombie = newZombie(name);
	newzombie->announce();
	delete newzombie;
}
