#include"Intern.hpp"

Intern::Intern(){

}
Intern::Intern( Intern const &other){
    *this = other;
}
Intern &Intern::operator=(Intern const &other){
    return *this;
}
const char* Intern::Internerror::what() const throw(){
    return "Error: doesn’t exist";
}
Intern::~Intern(){

}
AForm* Intern::makeForm(std::string Name_F, std::string target)
{
    std::string N_form[] = {"ShrubberyCreationForm",  "RobotomyRequestForm", "PresidentialPardonForm"};
    int i = 0;
    while(i < 3)
    {
        if(N_form[i] == Name_F)
            break;
        i++;
    }                      
    switch(i){
        case 0:
            std::cout << "Intern creates " << N_form[0] << std::endl;
            return new ShrubberyCreationForm(target);
        case 1:
            std::cout << "Intern creates " << N_form[1] << std::endl;
            return new RobotomyRequestForm(target);
        case 2:
            std::cout << "Intern creates " << N_form[2] << std::endl;
            return new PresidentialPardonForm(target);
    }
    throw Intern::Internerror();
}