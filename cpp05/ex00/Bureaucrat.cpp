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

std::string Bureaucrat::getName(){
    return name;
}

int Bureaucrat::getGrade(){
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

std::ostream& operator<<(std::ostream& ostm, Bureaucrat& bureaucrat)
{
    ostm << bureaucrat.getName() <<  " bureaucrat grade " << bureaucrat.getGrade() << ".\n";
    return ostm;
}
