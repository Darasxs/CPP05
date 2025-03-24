/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 15:03:03 by dpaluszk          #+#    #+#             */
/*   Updated: 2025/03/24 17:21:53 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45)
{
	this->target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form) : AForm(form)
{
	this->target = form.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &form)
{
	if (this == &form)
		return (*this);
	AForm::operator=(form);
	this->target = form.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

void RobotomyRequestForm::execution(const Bureaucrat &executor) const
{
	(void)executor;
	std::cout << "Drilling..." << std::endl;
	if (rand() % 2)
		std::cout << this->target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << this->target << " failed to be robotomized!" << std::endl;
}