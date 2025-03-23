/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 15:03:04 by dpaluszk          #+#    #+#             */
/*   Updated: 2025/03/23 16:21:18 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: AForm(target, 145, 137) // Example grades for signing and execution
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

void ShrubberyCreationForm::execution(const Bureaucrat &executor) const
{
	(void)executor; // Use executor if needed
	std::cout << "Shrubbery has been created!" << std::endl;
	// Add logic to create a shrubbery (e.g., write to a file)
}

