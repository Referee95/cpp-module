#include"ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Default Shrubbery", 25, 5), target(target)
{

}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other){
    *this = other;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const & other){

    return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm(){
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if(!getIssigned())
        throw AForm::NotSignedException();
    if(executor.getGrade() > this->getExcute())
        throw AForm::GradeTooLowException();
    std::ofstream outfile (target + "_shrubbery");
    outfile << "      /\\      " << std::endl;
    outfile << "     /\\*\\     " << std::endl;
    outfile << "    /\\O\\*\\    " << std::endl;
    outfile << "   /*/\\/\\/\\   " << std::endl;
    outfile << "  /\\O\\/\\*\\/\\  " << std::endl;
    outfile << " /\\*\\/\\*\\/\\/\\ " << std::endl;
    outfile << "/\\O\\/\\/*/\\O/\\\\" << std::endl;
    outfile << "      ||      " << std::endl;
    outfile << "      ||      " << std::endl;
    outfile << "      ||      " << std::endl;
    outfile.close();
}
