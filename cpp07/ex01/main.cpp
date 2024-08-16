/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:09:37 by disantam          #+#    #+#             */
/*   Updated: 2024/08/12 15:13:53 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	char	arr1[] = {'a', 'b', 'c', 'd'};
	int		arr2[] = {1, 2, 3, 4, 5, 6, 7, 8};
	double	arr3[] = {0.1, 3.14, 5.321};

	iter<char>(arr1, 4, printVar<char>);
	iter<int>(arr2, 8, printVar<int>);
	iter<double>(arr3, 3, printVar<double>);
	return (0);
}