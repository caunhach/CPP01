/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:10:55 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/19 16:10:57 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA{
	private:
		std::string _name;
		Weapon &_Weapon;
	public:
		HumanA(const std::string& name, Weapon &weapon);
		~HumanA(void);
		void	attack();
};

#endif
