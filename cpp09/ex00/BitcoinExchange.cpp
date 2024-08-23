/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:03:46 by disantam          #+#    #+#             */
/*   Updated: 2024/08/22 15:56:37 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static std::vector<std::string>	splitLine(std::string &str)
{
	size_t						pos;
	std::string					substr;
	std::vector<std::string>	line;

	pos = str.find('|');
	if (pos == std::string::npos)
	{
		throw(Bitexch::BadInputException());
	}
	line.push_back(str.substr(0, pos - 1));
	line.push_back(str.substr(pos + 1));
	return (line);
}

static void	checkValue(double val)
{
	if (val > 1000)
	{
		throw(Bitexch::TooLargeException());
	}
	if (val < 0)
	{
		throw (Bitexch::NotPositiveException());
	}
}

Bitexch::Bitexch() {}

Bitexch::Bitexch(const char *database)
{
	std::ifstream	infile(database);
	std::string		line;
	std::string		date;
	double			val;
	size_t			pos;

	while (std::getline(infile, line))
	{
		pos = line.find(',');
		if (pos == std::string::npos)
			continue ;
		date = line.substr(0, pos);
		val = std::atof(line.substr(pos + 1).c_str());
		this->_data[date] = val;
	}
	infile.close();
}

Bitexch::Bitexch(const Bitexch &copy)
{
	*this = copy;
}

Bitexch::~Bitexch() {}

const char	*Bitexch::BadInputException::what() const throw()
{
	return ("bad input");
}

const char	*Bitexch::TooLargeException::what() const throw()
{
	return ("too large a number");
}

const char	*Bitexch::NotPositiveException::what() const throw()
{
	return ("not a positive number");
}

void	Bitexch::getInput(std::ifstream &input)
{
	double						res;
	std::string					tmp;
	std::vector<std::string>  	line;

	while (std::getline(input, tmp))
	{
		try
		{
			line = splitLine(tmp);
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << " => " << tmp << std::endl;
			continue ;
		}
		std::map<std::string, double>::iterator	it = this->_data.upper_bound(line.front());
		if (it == this->_data.end())
			continue ;
		std::pair<std::string, double> p = *(--it);
		try
		{
			checkValue(std::atof(line.back().c_str()));
		}
		catch(const std::exception& e)
		{
			std::cout << "Error: " << e.what() << std::endl;
			continue ;
		}
		res = std::atof(line.back().c_str()) * p.second;
		std::cout << line[0] << " => " << line.back() << " = " << res << std::endl;
	}
}

const Bitexch	&Bitexch::operator=(const Bitexch &rhs)
{
	this->_data = rhs._data;
	return (*this);
}