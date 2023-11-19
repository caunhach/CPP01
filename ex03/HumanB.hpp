/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:11:15 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/19 16:11:17 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanB{
	private:
		std::string _name;
		Weapon *_Weapon;
	public:
		HumanB(std::string name);
		~HumanB(void);
		void	attack();
};

#endif
