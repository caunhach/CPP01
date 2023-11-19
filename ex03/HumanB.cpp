/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:11:08 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/19 16:11:09 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _Weapon(NULL)
{
	std::cout << "created HumanB and named " << name << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "destroyed HumanB that is " << this->_name << std::endl;
}

void	HumanB::attack()
{
	if (this->_Weapon)
	{
		Weapon	&weapon = *this->_Weapon;
		std::cout << this->_name << " attacks with his " << weapon.getType() << std::endl;
	}
	else
	{
		std::cout << this->_name << " cannot attacks without weapon" << std::endl;
	}
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_Weapon = &weapon;
}