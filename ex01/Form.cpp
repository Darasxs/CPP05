/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 03:06:14 by dpaluszk          #+#    #+#             */
/*   Updated: 2025/03/23 14:52:13 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : name("Default"), checkSigned(false), requiredSign(150),
	requiredExecute(150) {}

Form::Form(const std::string &name, int requiredSign,
	int requiredExecute) : name(name), checkSigned(false),
	requiredSign(requiredSign), requiredExecute(requiredExecute)
{
	if (requiredSign < 1)
		throw Bureaucrat::GradeTooHighException();
	if (requiredSign > 150)
		throw Bureaucrat::GradeTooLowException();
}

Form::Form(const Form &form) : name(form.name), checkSigned(form.checkSigned),
	requiredSign(form.requiredSign), requiredExecute(form.requiredExecute) {}

Form &Form::operator=(const Form &form)
{
	if (this == &form)
		return (*this);
	checkSigned = form.checkSigned;
	return (*this);
}

Form::~Form(void){}

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

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > requiredSign)
		throw GradeTooLowException();
	checkSigned = true;
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << "Name is: " << form.getName() << std::endl
		<< (form.isSigned() ? "signed" : "not signed") << std::endl
		<< "Grade to sign: " << form.getSignGrade() << std::endl
		<< "Grade to execute: " << form.getExecGrade();
	return (out);
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low to sign or execute the form.";
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high to sign or execute the form.";
}
