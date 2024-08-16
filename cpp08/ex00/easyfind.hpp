/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:14:49 by disantam          #+#    #+#             */
/*   Updated: 2024/08/14 14:37:33 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_H__
# define __EASYFIND_H__

# include <iostream>
# include <stdexcept>
# include <algorithm>
# include <list>
# include <vector>

template<typename T>
int	easyfind(T container, int n)
{
	typename T::const_iterator it = std::find(container.begin(), container.end(), n);

	if (it == container.end())
	{
		throw (std::exception());
	}
	std::cout << *it << " found inside the container" << std::endl;
	return (*it);
}

#endif