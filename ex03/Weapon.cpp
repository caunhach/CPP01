/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:10:20 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/19 16:10:22 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type): _type(type)
{
	std::cout << "created Weapon and its type is " << type << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "destroyed Weapon that is " << this->_type << std::endl;
}

const std::string	&Weapon::getType(void)
{
	std::string	&type = this->_type;
	return(this->_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}
