#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class	Bureaucrat;

class ShrubberyCreationForm : public AForm
{
  private:
	std::string target;
	void execution(const Bureaucrat &executor) const;

  public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &form);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &form);
	virtual ~ShrubberyCreationForm(void);
};

#endif
