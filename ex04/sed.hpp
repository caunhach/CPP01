/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:49:09 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/22 12:49:11 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include<fstream>
#include<iostream>
#include<string>

class sed
{
	private:
		std::string _filename;
		std::string _to_replace;
		std::string _new_string;
		std::ifstream	_infile;
		std::ofstream	_outfile;
		int	_check_infile();
		int	_check_outfile();
	public:
		sed(std::string filename, std::string s1, std:: string s2);
		~sed();
		int	process();
};

#endif
