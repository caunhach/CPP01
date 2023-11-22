/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:53:21 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/22 12:53:23 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4 || !argv[2][0] || !argv[3][0])
	{
		std::cerr << "arguments error" << std::endl;
		return (1);
	}
	sed	replace(argv[1], argv[2], argv[3]);
	if (replace.process())
		return (1);
	return (0);
}
