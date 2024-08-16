/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:42:44 by disantam          #+#    #+#             */
/*   Updated: 2024/08/09 12:13:22 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SERIALIZER_H__
# define __SERIALIZER_H__

# include <iostream>
# include <string>
# include <stdint.h>
# include "Data.hpp"

class Serializer
{
private:
	Serializer();
	Serializer(const Serializer &s);
	~Serializer();

	const Serializer	&operator=(const Serializer &rhs);

public:
	static uintptr_t	serialize(Data *ptr);
	static Data			*deserialize(uintptr_t raw);
};

#endif