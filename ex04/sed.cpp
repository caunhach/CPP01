/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:49:00 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/22 12:49:02 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

sed::sed(std::string filename, std::string s1, std:: string s2) : _filename(filename), _to_replace(s1), _new_string(s2)
{
}

sed::~sed()
{
}

int	sed::process()
{
	if (sed::_check_infile())
		return (1);
	if (sed::_check_outfile())
		return (1);
	std::string	line;
	while (std::getline(this->_infile, line))
	{
		size_t	pos = 0;
		while ((pos = line.find(this->_to_replace, pos)) != std::string::npos)
		{
			line.erase(pos, _to_replace.size());
			line.insert(pos, _new_string);
		}
		this->_outfile << line;
		if (!this->_infile.eof())
			this->_outfile << std::endl;
	}
	this->_infile.close();
	this->_outfile.close();
	return (0);
}

int	sed::_check_infile()
{
	this->_infile.open(_filename);
	if (!_infile.is_open())
	{
		std::cerr << "Error : failed to open infile" << std::endl;
		return 1;
	}
	return (0);
}

int	sed::_check_outfile()
{
	this->_outfile.open(_filename + ".replace");
	if (!_outfile.is_open())
	{
		std::cerr << "Error : failed to open outfile" << std::endl;
		return 1;
	}
	return (0);
}
