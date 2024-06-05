/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:20:38 by disantam          #+#    #+#             */
/*   Updated: 2024/05/31 10:53:33 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>

class Fixed {

private:
	int					_rawBits;
	static int const	_fracBits;

public:
	Fixed();
	Fixed(Fixed const& fix);
	~Fixed();

	int		getRawBits() const;
	void	setRawBits(int const raw);

	Fixed&	operator=(Fixed const& rhs);
};

#endif
