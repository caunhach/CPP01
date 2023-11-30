/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:48:47 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/19 15:48:49 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	Zombie::_index = 0;

Zombie::Zombie(const std::string& name)
{
	this->_name = name;
	std::cout << "Zombie " << this->_name << " has spwaned" << std::endl;
}

Zombie::Zombie(void)
{
	_index++;
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

void	Zombie::set_name(std::string name, int i)
{
	if (i == 0)
		std::cout << std::to_string(_index) << " \"" << name << "\"" << " of horde of Zombies has spawned" << std::endl;
	if (i < this->_index)
		this->_name = name;
	if (i == this->_index - 1)
		this->_index = 0;
}
