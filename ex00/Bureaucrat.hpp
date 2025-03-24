#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <iostream>

class Bureaucrat
{
  private:
	const std::string name;
	int grade;

  public:
	Bureaucrat(void);
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &bureaucrat);
	Bureaucrat &operator=(const Bureaucrat &bureaucrat);
	~Bureaucrat(void);

	std::string getName(void) const;
	int getGrade(void) const;
	void incrementGrade(void);
	void decrementGrade(void);

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
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif
