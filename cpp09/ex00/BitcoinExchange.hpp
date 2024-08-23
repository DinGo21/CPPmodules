/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:17:03 by disantam          #+#    #+#             */
/*   Updated: 2024/08/23 13:05:50 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BITCOINEXCHANGE_H__
# define __BITCOINEXCHANGE_H__

# include <iostream>
# include <fstream>
# include <cstdlib>
# include <stdexcept>
# include <string>
# include <vector>
# include <map>

class Bitexch
{
private:
	std::map<std::string, double>	_data;

public:
	Bitexch();
	Bitexch(const char *database);
	Bitexch(const Bitexch &copy);
	~Bitexch();

	class BadInputException: public std::exception
	{
	public:
		const char	*what() const throw();
	};
	class TooLargeException: public std::exception
	{
	public:
		const char	*what() const throw();
	};
	class NotPositiveException: public std::exception
	{
	public:
		const char	*what() const throw();
	};

	void			getInput(std::ifstream &input);

	const Bitexch	&operator=(const Bitexch &rhs);
};

#endif