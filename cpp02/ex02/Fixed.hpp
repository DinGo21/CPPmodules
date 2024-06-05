/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:20:38 by disantam          #+#    #+#             */
/*   Updated: 2024/05/17 11:21:00 by disantam         ###   ########.fr       */
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
	Fixed(int const num);
	Fixed(float const num);
	Fixed(Fixed const& fix);
	~Fixed();

	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat() const;
	int		toInt() const;

	Fixed&	operator=(Fixed const& rhs);
	bool	operator>(Fixed const& rhs) const;
	bool	operator<(Fixed const& rhs) const;
	bool	operator>=(Fixed const& rhs) const;
	bool	operator<=(Fixed const& rhs) const;
	bool	operator==(Fixed const& rhs) const;
	bool	operator!=(Fixed const& rhs) const;
	Fixed	operator+(Fixed const& rhs) const;
	Fixed	operator-(Fixed const& rhs) const;
	Fixed	operator*(Fixed const& rhs) const;
	Fixed	operator/(Fixed const& rhs) const;
	Fixed&	operator++();
	Fixed	operator++(int num);
	Fixed&	operator--();
	Fixed	operator--(int num);

	static Fixed const&	min(Fixed const& lhs, Fixed const& rhs);
	static Fixed const&	max(Fixed const& lhs, Fixed const& rhs);
};

std::ostream&	operator<<(std::ostream& o, Fixed const& rhs);

#endif
