/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:23:04 by daras             #+#    #+#             */
/*   Updated: 2025/03/23 02:58:53 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureucrat.hpp"

int	main(void)
{
	try
	{
		Bureucrat mark("Mark", 49);
		std::cout << "Initial grade: " << mark.getGrade() << std::endl;
		mark.decrementGrade();
		std::cout << "Grade after decrement: " << mark.getGrade() << std::endl;
	}
	catch (const Bureucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const Bureucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "An error occurred: " << e.what() << std::endl;
	}

	return (0);
}