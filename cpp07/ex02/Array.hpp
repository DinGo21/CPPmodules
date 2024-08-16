/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:24:34 by disantam          #+#    #+#             */
/*   Updated: 2024/08/14 16:25:36 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_H__
# define __ARRAY_H__

# include <iostream>
# include <cstdlib>
# include <stdexcept>

template<typename T>
class Array
{
private:
	T 				*_arr;
	unsigned int	_size;

public:
	Array();
	Array(unsigned int n);
	Array(const Array &a);
	~Array();

	class OutOfBoundsException: public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	int				size() const;

	const Array		&operator=(const Array &rhs);
	T				&operator[](const unsigned int index);
	const T			&operator[](const unsigned int index) const;
};

template<typename T>
Array<T>::Array(): _arr(NULL), _size(0)
{
	std::cout << "Default Array constructor called" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n): _arr(new T[n]), _size(n)
{
	for (unsigned int i = 0; i < n; i++)
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
int	Array<T>::size() const
{
	return (this->_size);
}

template<typename T>
T	&Array<T>::operator[](const unsigned int index)
{
	if (index >= this->_size)
	{
		throw (Array<T>::OutOfBoundsException());
	}
	return (this->_arr[index]);
}

template<typename T>
const T	&Array<T>::operator[](const unsigned int index) const
{
	if (index >= this->_size)
	{
		throw (Array<T>::OutOfBoundsException());
	}
	return (this->_arr[index]);
}

template<typename T>
const Array<T>	&Array<T>::operator=(const Array &rhs)
{
	this->_arr = new T[rhs.size()];
	this->_size = rhs.size();
	for (unsigned int i = 0; i < this->_size; i++)
	{
		this->_arr[i] = rhs[i];
	}
	return (*this);
}

#endif