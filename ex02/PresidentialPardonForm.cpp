/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 15:03:02 by dpaluszk          #+#    #+#             */
/*   Updated: 2025/03/24 16:45:56 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5)
{
	this->target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form) : AForm(form)
{
	this->target = form.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &form)
{
	if (this == &form)
		return (*this);
	AForm::operator=(form);
	this->target = form.target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

void PresidentialPardonForm::execution(const Bureaucrat &executor) const
{
	(void)executor;
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
