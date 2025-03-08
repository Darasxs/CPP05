#ifndef "BUREUCRAT_HPP"
# define "BUREUCRAT_HPP"

#include <iostream>
#include <exception>

class Bureucrat
{
    private:
        const std::string name;
        int grade;

    public:
        Bureucrat(void);
        Bureucrat(std::string &name, int grade);
        Bureucrat(const Bureucrat &bureucrat);
        Bureucrat &operator=(const Bureucrat &bureucrat);
        ~Bureucrat(void);
        
        std::string getName(void) const;
        int getGrade(void) const;
        void incrementGrade(void);
        void decrementGrade(void);
};

#endif