/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:30:16 by disantam          #+#    #+#             */
/*   Updated: 2024/08/12 14:50:32 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_H__
# define __ITER_H__

# include <iostream>

template<typename T>
void	iter(T *arr, int len, void (*f)(T *))
{
	int	i = 0;

	while (i < len)
	{
		f(arr + i);
		i++;
	}
}

template<typename T>
void	printVar(T *var)
{
	std::cout << *var << std::endl;
}

#endif