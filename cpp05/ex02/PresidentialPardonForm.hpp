/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:51:51 by disantam          #+#    #+#             */
/*   Updated: 2024/08/06 12:47:58 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_H__
# define __PRESIDENTIALPARDONFORM_H__

# include "Form.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string	_target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string name);
	PresidentialPardonForm(const PresidentialPardonForm &s);
	~PresidentialPardonForm();

	void				makeExecution(const Bureaucrat &executor) const;
	const std::string	&getTarget() const;

	const PresidentialPardonForm	&operator=(const PresidentialPardonForm &rhs);
};

#endif