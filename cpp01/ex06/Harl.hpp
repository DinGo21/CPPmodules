/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:58:50 by disantam          #+#    #+#             */
/*   Updated: 2024/05/14 16:11:35 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_H__
#define __HARL_H__

#include <iostream>
#include <string>

class Harl {

public:
	void	complain(std::string level);

private:
	void	debug(void) const;
	void	info(void) const;
	void	warning(void) const;
	void	error(void) const;
};

#endif