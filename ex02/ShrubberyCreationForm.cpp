/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 15:03:04 by dpaluszk          #+#    #+#             */
/*   Updated: 2025/03/24 10:50:35 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form) : AForm(form)
{
	this->target = form.target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form)
{
	if (this == &form)
		return (*this);
	AForm::operator=(form);
	this->target = form.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

void ShrubberyCreationForm::execution(const Bureaucrat &executor) const
{
	(void)executor;
	std::ofstream file(this->target + "_shrubbery");
	if (!file.is_open())
	{
		std::cerr << "Error: Could not create file " << this->target + "_shrubbery" << std::endl;
		return;
	}
	file << "      &&& &&  & &&\n";
	file << "      && &\\/&\\|& ()|/ @, &&\n";
	file << "      &\\/(/&/&||/& /_/)_&/_&\n";
	file << "   &() &\\/&|()|/&\\/ '%\" & ()\n";
	file << "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n";
	file << "&&   && & &| &| /& & % ()& /&&\n";
	file << " ()&_---()&\\&\\|&&-&&--%---()~\n";
	file << "     &&     \\|||\n";
	file << "             |||\n";
	file << "             |||\n";
	file << "             |||\n";
	file << "             |||\n";
	file << "             |||\n";
	file << "             |||\n";
	file << "             |||\n";
	file << "             |||\n";
	file << "       , -=-~  .-^- _\n";
	file.close();
	std::cout << "Shrubbery has been created in " << this->target + "_shrubbery" << std::endl;
}

