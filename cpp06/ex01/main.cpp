/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:04:37 by disantam          #+#    #+#             */
/*   Updated: 2024/08/09 12:18:22 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data 		data;
	uintptr_t	raw;

	raw = Serializer::serialize(&data);
	std::cout << "Serialized: " << raw << std::endl;
	std::cout << "Deserialized: " << Serializer::deserialize(raw) << std::endl;
	if (Serializer::deserialize(raw) == &data)
	{
		std::cout << "Equal" << std::endl;
	}
	return (0);
}