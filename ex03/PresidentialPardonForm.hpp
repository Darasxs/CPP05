#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
  private:
	std::string target;
	void execution(const Bureaucrat &executor) const override;

  public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &form);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &form);
	virtual ~PresidentialPardonForm(void);
};

#endif