#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("abu obaida")
{
    grade = 10;
}
Bureaucrat::Bureaucrat(std::string name, int grad) : name(name)
{
    grade = grad;
    if(grad < 1)
        throw Bureaucrat::GradeTooHighException();
    if(grad > 150)
        throw Bureaucrat::GradeTooLowException();
}
Bureaucrat::Bureaucrat(Bureaucrat const &other){
    *this = other;
}
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other){
    if(this != &other)
        this->grade = other.grade;
    return *this;
}
Bureaucrat::~Bureaucrat(){

}

const char*  Bureaucrat::GradeTooHighException::what()  const throw()
{
    return "Grade too high";
}
const char*  Bureaucrat::GradeTooLowException::what()  const throw()
{
    return "Grade too low";
}

std::string Bureaucrat::getName() const {
    return name;
}
int Bureaucrat::getGrade() const{
    return grade;
}
void Bureaucrat::gradeUp(){
    grade--;
    if(!(grade > 0 && grade <= 150))
        throw Bureaucrat::GradeTooHighException();
}
void Bureaucrat::gradeDown(){
    grade++;
    if(!(grade > 0 && grade <= 150))
        throw Bureaucrat::GradeTooLowException();
}
void Bureaucrat::signForm(Bureaucrat &bureaucrat, AForm &form)
{
    try
    {
        form.beSigned(bureaucrat);
    }
    catch(std::exception &e)
    {
        std::cout << bureaucrat.getName() << " couldn't sign " << form.getName() << " because grade too low\n";
    }
    if(form.getIssigned())
        std::cout << bureaucrat.getName() << " signed " << form.getName() << std::endl;
}
std::ostream& operator<<(std::ostream& ostm, Bureaucrat& bureaucrat)
{
    ostm << bureaucrat.getName() <<  " bureaucrat grade " << bureaucrat.getGrade() << ".\n";
    return ostm;
}
void Bureaucrat::executeForm(AForm const & form) const{
    try{
        form.execute(*this);
        std::cout << getName() << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception &e){
        std::cerr << getName() << " couldn't execute the form: " << e.what() << std:: endl;
    }
}