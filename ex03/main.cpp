/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 15:03:01 by dpaluszk          #+#    #+#             */
/*   Updated: 2025/03/25 00:04:36 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main(void)
{
	Intern intern1;
	AForm *robot_form = intern1.makeForm("RobotomyRequestForm", "Robot");

	if (robot_form)
	{
		Bureaucrat john("John", 46);
		john.signForm(*robot_form);
		john.executeForm(*robot_form);
		delete robot_form;
	}

	std::cout << std::endl;

	Intern intern2;
	AForm *president_form = intern2.makeForm("PresidentialPardonForm", "President");

	if (president_form)
	{
		Bureaucrat mark("John", 46);
		mark.signForm(*president_form);
		mark.executeForm(*president_form);
		delete president_form;
	}

	std::cout << std::endl;

	Intern intern3;
	AForm *tree_form = intern3.makeForm("ShrubberyCreationForm", "Tree");

	if (tree_form)
	{
		Bureaucrat Karl("Karl", 46);
		Karl.signForm(*tree_form);
		Karl.executeForm(*tree_form);
		delete tree_form;
	}
	return 0;
}
