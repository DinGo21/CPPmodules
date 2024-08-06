/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:35:15 by disantam          #+#    #+#             */
/*   Updated: 2024/08/06 15:44:41 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_H__
# define __ROBOTOMYREQUESTFORM_H__

# include <cstdlib>
# include "Form.hpp"

class RobotomyRequestForm : public AForm
{
private:
	std::string	_target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string name);
	RobotomyRequestForm(const RobotomyRequestForm &s);
	~RobotomyRequestForm();

	void				makeExecution(const Bureaucrat &executor) const;
	const std::string	&getTarget() const;

	static AForm		*makeForm(AForm *form, 
							const std::string &name, const std::string &target);

	const RobotomyRequestForm	&operator=(const RobotomyRequestForm &rhs);
};

#endif