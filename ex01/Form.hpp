#ifndef FORM_HPP
# define FORM_HPP

# include "Bureucrat.hpp"

class Form
{
  private:
	const std::string name;
	bool isSigned;
	const int requiredSign;
	const int requiredExecute;

  public:
	Form(void);
	Form(const std::string &name, int sign, int execute);
	Form(const Form &form);
	Form &operator=(const Form &form);
	~Form(void);

	class GradeTooHighException : public std::exception
	{
		public:
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
		const char *what() const throw();
	};

	const std::string &getName(void) const;
	bool isSigned(void) const;
	int getSignGrade(void) const;
	int getExecGrade(void) const;
	void beSigned(const Bureucrat &bureucrat);
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif