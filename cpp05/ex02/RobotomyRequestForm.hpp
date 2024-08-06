/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:35:15 by disantam          #+#    #+#             */
/*   Updated: 2024/08/06 13:10:04 by disantam         ###   ########.fr       */
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

	const RobotomyRequestForm	&operator=(const RobotomyRequestForm &rhs);
};

#endif