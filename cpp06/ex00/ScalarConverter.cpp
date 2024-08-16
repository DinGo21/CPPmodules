/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:26:20 by disantam          #+#    #+#             */
/*   Updated: 2024/08/08 17:32:56 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &sc)
{
	*this = sc;
}

ScalarConverter::~ScalarConverter() {}

static int	ispseudo(const std::string &str)
{
	if (str == "nan" || str == "+inf" || str == "-inf")
	{
		return (1);
	}
	return (0);
}

static void	convertDouble(const std::string &str)
{
	double	d = std::atof(str.c_str());
	long	n = std::atoi(str.c_str());

	std::cout << "double: ";
	if (ispseudo(str))
	{
		std::cout << str;
	}
	else if (std::floor(d) == n && std::ceil(d) == n)
	{
		std::cout << d << ".0";
	}
	else
	{
		std::cout << d;
	}
}

static void convertFloat(const std::string &str)
{
	float	f = std::atof(str.c_str());
	long	n = std::atoi(str.c_str());

	std::cout << "float: ";
	if (ispseudo(str))
	{
		std::cout << str;
	}
	else if (std::floor(f) == n && std::ceil(f) == n)
	{
		std::cout << f << ".0";
	}
	else
	{
		std::cout << f;
	}
	std::cout << 'f' << std::endl;
}

static void convertInt(const std::string &str)
{
	long	i = std::atol(str.c_str());
	
	std::cout << "int: ";
	if (i > 2147483647 || i < -2147483648 || ispseudo(str))
	{
		std::cout << "impossible" << std::endl;
	}
	else
	{
		std::cout << i << std::endl;
	}
}

static void	convertChar(const std::string &str)
{
	char	c = static_cast<char>(std::atoi(str.c_str()));

	std::cout << "char: ";
	if (ispseudo(str))
	{
		std::cout << "impossible" << std::endl;
	}
	else if (!std::isprint(c))
	{
		std::cout << "Non displayable" << std::endl;
	}
	else
	{
		std::cout << '\'' << c << '\'' << std::endl;
	}
}

void	ScalarConverter::convert(std::string str)
{
	convertChar(str);
	convertInt(str);
	convertFloat(str);
	convertDouble(str);
}

const ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &rhs)
{
	(void)rhs;
	return (*this);
}
