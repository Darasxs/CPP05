#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <iostream>

class Intern
{
  public:
	Intern(void);
	Intern(Intern const &copy);
	~Intern(void);
	Intern &operator=(Intern const &ope);

	AForm *makeForm(std::string name, std::string target);
};

#endif