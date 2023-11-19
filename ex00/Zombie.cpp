#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie " << this->_name << " has spwaned" << std::endl;
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
