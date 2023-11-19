/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:47:56 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/19 15:47:59 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
