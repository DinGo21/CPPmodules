/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:20:57 by disantam          #+#    #+#             */
/*   Updated: 2024/08/12 12:56:26 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_H__
# define __WHATEVER_H__

# include <iostream>

template<typename T>
void	swap(T &x, T &y)
{
	T tmp = y;
	y = x;
	x = tmp;
}

template<typename T>
const T	&max(const T &x, const T &y)
{
	return (x > y ? x : y);
}

template<typename T>
const T	&min(const T &x, const T &y)
{
	return (x < y ? x : y);
}

#endif