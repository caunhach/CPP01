/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:48:06 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/19 15:48:09 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );

void	randomChump(std::string name)
{
	Zombie *newzombie = newZombie(name);
	newzombie->announce();
	delete newzombie;
}
