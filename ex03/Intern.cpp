/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 22:51:57 by dpaluszk          #+#    #+#             */
/*   Updated: 2025/03/25 00:01:14 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern(const Intern &copy)
{
	*this = copy;
}

Intern &Intern::operator=(const Intern &copy)
{
	(void)copy;
	return (*this);
}

Intern::~Intern(void)
{
}

static AForm	*createRobotomyRequestForm(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}

static AForm	*createPresidentialPardonForm(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}

static AForm	*createShrubberyCreationForm(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	std::string formNames[] = {"RobotomyRequestForm", "PresidentialPardonForm",
		"ShrubberyCreationForm"};

	AForm *(*formCreators[])(const std::string &) = {createRobotomyRequestForm,
		createPresidentialPardonForm, createShrubberyCreationForm};

	for (int i = 0; i < 3; i++)
	{
		if (name == formNames[i])
		{
			std::cout << "Intern creates the form: " << name << std::endl;
			return(formCreators[i](target));
		}
	}
	
	std::cout << "Intern cannot create form: " << name << std::endl;
	return (NULL);
}