/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:55:39 by disantam          #+#    #+#             */
/*   Updated: 2024/08/08 17:20:45 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALARCONVERTER_H__
# define __SCALARCONVERTER_H__

# include <iostream>
# include <string>
# include <cstdlib>
# include <cmath>

class ScalarConverter
{
private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &sc);
	~ScalarConverter();

	const ScalarConverter	&operator=(const ScalarConverter &rhs);

public:
	static void	convert(std::string str);
};

#endif