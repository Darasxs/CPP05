/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 03:06:14 by dpaluszk          #+#    #+#             */
/*   Updated: 2025/03/23 13:24:20 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : name("Default"), checkSigned(false), requiredSign(150),
	requiredExecute(150)
{
}

Form::Form(const std::string &name, int requiredSign,
	int requiredExecute) : name(name), checkSigned(false),
	requiredSign(requiredSign), requiredExecute(requiredExecute)
{
	if (requiredSign < 1)
		throw Bureucrat::GradeTooHighException();
	if (requiredSign > 150)
		throw Bureucrat::GradeTooLowException();
}

Form::Form(const Form &form) : name(form.name), checkSigned(form.checkSigned),
	requiredSign(form.requiredSign), requiredExecute(form.requiredExecute)
{
}

Form &Form::operator=(const Form &form)
{
	if (this == &form)
		return (*this);
	checkSigned = form.checkSigned;
	return (*this);
}

Form::~Form(void)
{
}

const std::string &Form::getName(void) const
{
	return (name);
}

bool Form::isSigned(void) const
{
	return (checkSigned);
}

int Form::getSignGrade(void) const
{
	return (requiredSign);
}

int Form::getExecGrade(void) const
{
	return (requiredExecute);
}

std::ostream &operator<<(std::ostream &out, const Bureucrat &bureucrat)
{
	out << bureucrat.getName() << ", bureucrat grade " << bureucrat.getGrade();
	return (out);
}

void Form::beSigned(const Bureucrat &bureucrat)
{
	if(bureucrat.getGrade() > requiredSign)
		throw GradeTooLowException();
	checkSigned = true;
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << "Name is: " << form.getName() << std::endl << (form.isSigned() ? "signed" : "not signed") << "Grade to sign: " << form.getSignGrade() << "Grade to execute: " << form.getExecGrade();

	return (out);
}
