/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 15:03:01 by dpaluszk          #+#    #+#             */
/*   Updated: 2025/03/24 22:47:02 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat Janek("Janek", 5);
		PresidentialPardonForm formA("Presidential");
		std::cout << Janek << std::endl;
		std::cout << formA << std::endl;
		Janek.signForm(formA);
		std::cout << formA << std::endl;
		Janek.executeForm(formA);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat Mariusz("Mariusz", 25);
		RobotomyRequestForm formB("Robotomy");
		std::cout << Mariusz << std::endl;
		std::cout << formB << std::endl;
		Mariusz.signForm(formB);
		std::cout << formB << std::endl;
		Mariusz.executeForm(formB);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat Kamila("Kamila", 25);
		ShrubberyCreationForm FormC("Tree");
		std::cout << Kamila << std::endl;
		std::cout << FormC << std::endl;
		Kamila.signForm(FormC);
		std::cout << FormC << std::endl;
		Kamila.executeForm(FormC);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return (0);
}
