/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:05:45 by disantam          #+#    #+#             */
/*   Updated: 2024/05/08 11:22:58 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "main.hpp"

class Contact {
	public:
		std::string	getFirstName() const;
		void		setFirstName(std::string firstName);
		std::string	getLastName() const;
		void		setLastName(std::string lastName);
		std::string	getNickname() const;
		void		setNickname(std::string nickname);
		std::string	getPhoneNumber() const;
		void		setPhoneNumber(std::string phoneNumber);
		std::string	getSecret() const;
		void		setSecret(std::string secret);

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_secret;
};

#endif
