/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daras <daras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:23:04 by daras             #+#    #+#             */
/*   Updated: 2025/03/08 15:53:19 by daras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureucrat.hpp"

int main()
{
    try
    {
        Bureucrat mark("Mark", 151);
    }
    catch (const Bureucrat::GradeTooHighException &e)
    {
        std::cerr << "Grade too high: " << e.what() << std::endl;
    }
    catch (const Bureucrat::GradeTooLowException &e)
    {
        std::cerr << "Grade too low: " << e.what() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "An error occurred: " << e.what() << std::endl;
    }

    return 0;
}