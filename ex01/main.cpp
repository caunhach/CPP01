/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:49:07 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/19 15:49:10 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main()
{
	Zombie *hordeZombie = zombieHorde(10, "Bob");
	for (int i = 0; i < 10; i++)
		hordeZombie[i].announce();
	Zombie *hordeZombie2 = zombieHorde(20, "foo");
	for (int i = 0; i < 20; i++)
		hordeZombie2[i].announce();
	delete []hordeZombie;
	delete []hordeZombie2;
	return (0);
}
