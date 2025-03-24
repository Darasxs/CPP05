#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
  private:
	std::string target;
	void execution(const Bureaucrat &executor) const override;

  public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &form);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &form);
	virtual ~RobotomyRequestForm(void);
};

#endif