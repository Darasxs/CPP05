#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
  public:
	ShrubberyCreationForm(const std::string &target);
	virtual ~ShrubberyCreationForm(void);

  protected:
	void execution(const Bureaucrat &executor) const override;
};

#endif
