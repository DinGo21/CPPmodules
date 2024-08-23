/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:33:54 by disantam          #+#    #+#             */
/*   Updated: 2024/08/22 13:01:20 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	Bitexch			btc("data.csv");
	std::ifstream	infile(argv[1]);

	if (!infile.is_open())
	{
		return (1);
	}
	btc.getInput(infile);	
	return (0);
}