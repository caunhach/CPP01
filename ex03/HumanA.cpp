/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:10:46 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/19 16:10:48 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(Weapon &weapon, std::string name): _Weapon(weapon), _name(name)
{
	std::cout << "created HumanA and named" << name << std::endl;
	std::cout << "his weapon type is " << weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "destroyed HumanA that is " << this->_name << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with his " << this->_Weapon.getType() << std::endl;
}
