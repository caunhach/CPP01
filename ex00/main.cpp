#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void	randomChump(std::string name);

int	main(int argc, char **argv)
{
	Zombie *newzombie = newZombie("boat");
	newzombie->announce();
	delete newzombie;
	randomChump("foo");
	return (0);
}
