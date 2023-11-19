/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:10:27 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/19 16:10:29 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>

class Weapon {
	private:
		std::string	_type;
	public:
		const std::string		&getType(void);
		void		setType(std::string type);
};

#endif
