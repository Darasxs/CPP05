#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class AForm
{
  protected:
	virtual void execution(const Bureaucrat &executor) const = 0;

  private:
	const std::string name;
	bool checkSigned;
	const int requiredSign;
	const int requiredExecute;

  public:
	AForm(void);
	AForm(const std::string &name, int requiredSign, int requiredExecute);
	AForm(const AForm &form);
	AForm &operator=(const AForm &form);
	virtual ~AForm(void);

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

	class FormNotSigned : public std::exception
	{
		public:
		const char *what() const throw();
	};

	const std::string &getName(void) const;
	bool isSigned(void) const;
	int getSignGrade(void) const;
	int getExecGrade(void) const;
	void beSigned(const Bureaucrat &bureucrat);
	void execute(const Bureaucrat &executor) const;
};

std::ostream &operator<<(std::ostream &out, const AForm &form);

#endif
