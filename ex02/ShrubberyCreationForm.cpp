/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 15:03:04 by dpaluszk          #+#    #+#             */
/*   Updated: 2025/03/24 10:08:34 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137)
{
	target = "default";
}

void ShrubberyCreationForm::execution(const Bureaucrat &executor) const
{
	(void)executor;
	std::cout << "Shrubbery has been created!" << std::endl;
}

