/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:47:46 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/19 15:47:48 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string& name)
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
