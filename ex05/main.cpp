/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:35:32 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/19 21:35:34 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl h;
	h.complain("DEBUG");
	h.complain("INFO");
	h.complain("WARNING");
	h.complain("ERROR");
	return (0);
}