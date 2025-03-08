/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureucrat.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daras <daras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:23:03 by daras             #+#    #+#             */
/*   Updated: 2025/03/08 15:49:00 by daras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureucrat.hpp"

Bureucrat::Bureucrat(void) : name("Bureucrat"), grade(150) {}

Bureucrat::Bureucrat(const std::string &name, int grade) : name(name)
{
    if (grade < 1)
        throw Bureucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureucrat::GradeTooLowException();
    this->grade = grade;
}

Bureucrat::Bureucrat(const Bureucrat &bureucrat) : name(bureucrat.name), grade(bureucrat.grade) {}

Bureucrat &Bureucrat::operator=(const Bureucrat &bureucrat)
{
    if (this == &bureucrat)
        return *this;
    this->grade = bureucrat.grade;
    return *this;
}

Bureucrat::~Bureucrat(void) {}

std::string Bureucrat::getName(void) const
{
    return this->name;
}

int Bureucrat::getGrade(void) const
{
    return this->grade;
}

void Bureucrat::incrementGrade(void)
{
    if (this->grade == 1)
        throw Bureucrat::GradeTooHighException();
    this->grade--;
}

void Bureucrat::decrementGrade(void)
{
    if (this->grade == 150)
        throw Bureucrat::GradeTooLowException();
    this->grade++;
}

const char *Bureucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char *Bureucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

std::ostream &operator<<(std::ostream &out, const Bureucrat &bureucrat)
{
    out << bureucrat.getName() << ", bureucrat grade " << bureucrat.getGrade();
    return out;
}