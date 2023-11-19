#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie " << this->_name << " spwaned" << std::endl;
}

Zombie::Zombie(void)
{
	this->_name = "";
	std::cout << "horde of Zombies spawned" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->_name << " die" << std::endl;
}

void	Zombie::announce(void)
{
	if (this->_name != "foo")
		std::cout << "<";
	std::cout << this->_name;
	if (this->_name != "foo")
		std::cout << ">";
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}