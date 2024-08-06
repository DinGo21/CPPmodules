/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:36:58 by disantam          #+#    #+#             */
/*   Updated: 2024/08/06 15:45:17 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_H__
# define __SHRUBBERYCREATIONFORM_H__

# include "Form.hpp"

#define TREE "          &&& &&  & &&\n      && &\\/&\\|& ()|/ @, &&\n      &\\/(/&/&||/& /_/)_&/_&\n   &() &\\/&|()|/&\\/ '%\" & ()\n  &_\\_&&_\\ |& |&&/&__%_/_& &&\n&&   && & &| &| /& & % ()& /&&\n ()&_---()&\\&\\|&&-&&--%---()~\n     &&     \\|||\n             |||\n             |||\n             |||\n       , -=-~  .-^- _\n"

class ShrubberyCreationForm : public AForm
{
private:
	std::string	_target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string name);
	ShrubberyCreationForm(const ShrubberyCreationForm &s);
	~ShrubberyCreationForm();

	void				makeExecution(const Bureaucrat &executor) const;
	const std::string	&getTarget() const;

	static AForm		*makeForm(AForm *form, 
							const std::string &name, const std::string &target);

	const ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &rhs);
};

#endif