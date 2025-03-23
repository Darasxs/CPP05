#ifndef BUREUCRAT_HPP
# define BUREUCRAT_HPP

# include <exception>
# include <iostream>

class Bureucrat
{
  private:
	const std::string name;
	int grade;

  public:
	Bureucrat(void);
	Bureucrat(const std::string &name, int grade);
	Bureucrat(const Bureucrat &bureucrat);
	Bureucrat &operator=(const Bureucrat &bureucrat);
	~Bureucrat(void);

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

std::ostream &operator<<(std::ostream &out, const Bureucrat &bureucrat);

#endif