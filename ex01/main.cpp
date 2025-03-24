/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 03:06:15 by dpaluszk          #+#    #+#             */
/*   Updated: 2025/03/24 10:24:05 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat Mark("Mark", 10);
		Form formA("Form1", 40, 30);

		std::cout << Mark << std::endl;
		std::cout << formA << std::endl;

		Mark.signForm(formA);
		std::cout << formA << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	try
	{
		Bureaucrat Mariusz("Mariusz", 10);
		Form formA("Form1", 5, 30);

		std::cout << Mariusz << std::endl;
		std::cout << formA << std::endl;

		Mariusz.signForm(formA);
		std::cout << formA << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return (0);
}