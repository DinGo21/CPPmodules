/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:17:53 by disantam          #+#    #+#             */
/*   Updated: 2024/08/12 17:31:14 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array(): _arr(NULL), _size(0)
{
	std::cout << "Default Array constructor called" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n): _arr(new T[n]), _size(n)
{
	for (int i = 0; i < n; i++)
	{
		this->_arr[i] = 0;
	}
	std::cout << "Array created" << std::endl;
}

template<typename T>
Array<T>::Array(const Array &a)
{
	*this = a;
	std::cout << "Array copy constructor called" << std::endl;
}

template<typename T>
Array<T>::~Array()
{
	delete this->_arr;
	std::cout << "Array destroyed" << std::endl;
}

template<typename T>
const char *Array<T>::OutOfBoundsException::what() const throw()
{
	return ("index out of bounds");
}

template<typename T>
unsigned int	Array<T>::size()
{
	return (this->size);
}

template<typename T>
const Array<T>	&Array<T>::operator=(const Array &rhs)
{
	this->_arr = new T[rhs.size()];
	this->_size = rhs.size();
	for (int i = 0; i < this->_size; i++)
	{
		this->_arr[i] = rhs[i];
	}
	return (*this);
}

template<typename T>
T	&Array<T>::operator[](const unsigned int index)
{
	if (index >= _size)
	{
		return (Array<T>::OutOfBoundsException());
	}
	return (this->_arr[index]);
}