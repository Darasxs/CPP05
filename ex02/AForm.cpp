/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 15:03:00 by dpaluszk          #+#    #+#             */
/*   Updated: 2025/03/24 16:55:42 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

AForm::AForm(void) : name("Default"), checkSigned(false), requiredSign(150),
	requiredExecute(150) {}

AForm::AForm(const std::string &name, int requiredSign,
	int requiredExecute) : name(name), checkSigned(false),
	requiredSign(requiredSign), requiredExecute(requiredExecute)
{
	if (requiredSign < 1 || requiredExecute < 1)
		throw AForm::GradeTooHighException();
	if (requiredSign > 150 || requiredExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &form) : name(form.name),
	checkSigned(form.checkSigned), requiredSign(form.requiredSign),
	requiredExecute(form.requiredExecute) {}

AForm &AForm::operator=(const AForm &form)
{
	if (this == &form)
		return (*this);
	checkSigned = form.checkSigned;
	return (*this);
}

AForm::~AForm(void){}

const std::string &AForm::getName(void) const
{
	return (name);
}

bool AForm::isSigned(void) const
{
	return (checkSigned);
}

int AForm::getSignGrade(void) const
{
	return (requiredSign);
}

int AForm::getExecGrade(void) const
{
	return (requiredExecute);
}

void AForm::beSigned(const Bureaucrat &bureucrat)
{
	if (bureucrat.getGrade() > requiredSign)
		throw AForm::GradeTooLowException();
	checkSigned = true;
}

void AForm::execute(const Bureaucrat &executor) const
{
	if (!checkSigned)
		throw AForm::FormNotSigned();
	if (executor.getGrade() > requiredExecute)
		throw AForm::GradeTooLowException();
	execution(executor);
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high.";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low.";
}

const char *AForm::FormNotSigned::what() const throw()
{
	return "Form is not signed.";
}

std::ostream &operator<<(std::ostream &out, const AForm &form)
{
	out << "Name is: " << form.getName() << std::endl
		<< (form.isSigned() ? "signed" : "not signed") << std::endl
		<< "Grade to sign: " << form.getSignGrade() << std::endl
		<< "Grade to execute: " << form.getExecGrade();
	return (out);
}