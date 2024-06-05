/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:02:18 by disantam          #+#    #+#             */
/*   Updated: 2024/05/08 16:50:25 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "main.hpp"

class PhoneBook {
	public:

		PhoneBook();
		~PhoneBook();
		void	add();
		void	search();

	private:
		Contact	_contacts[8];
		int		_contactIndex;
		int		_contactNum;

		void	_listField(std::string field);
		void	_contactIndexer();
};

#endif
