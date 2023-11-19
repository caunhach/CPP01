/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:49:35 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/19 15:49:37 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *hordezombie = new Zombie[N];
	for (int i = 0; i < N; i++)
		hordezombie[i].set_name(name, i);
	return hordezombie;
}
