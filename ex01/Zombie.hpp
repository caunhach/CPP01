/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:48:55 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/19 15:48:58 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string	_name;
		static int	_index;
	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	set_name(std::string, int N);
};

#endif
