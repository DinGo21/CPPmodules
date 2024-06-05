/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:06:31 by disantam          #+#    #+#             */
/*   Updated: 2024/06/03 16:08:00 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_H__
#define __BRAIN_H__

#include <iostream>
#include <string>

class Brain {

private:
	std::string	_ideas[100];

public:
	Brain();
	Brain(const Brain& b);
	~Brain();

	const std::string&	getIdea(const int in) const;
	void				setIdea(const std::string& idea, const int in);

	Brain&	operator=(const Brain& rhs);
};

#endif
