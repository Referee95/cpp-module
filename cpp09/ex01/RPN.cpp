#include"RPN.hpp"

RPN::RPN(){
}

RPN::~RPN(){
}

RPN::RPN(RPN const &other){
    (void)other;
}
RPN& RPN::operator=(RPN const &other){
    (void)other;
    return(*this);
}
void RPN::R_P_N(std::string input){
    std::stringstream ss(input);
    std::string n_o;
    while(ss >> n_o)
    {
        if(n_o.length() != 1 || (!is_opt(n_o)  && !std::isdigit(n_o[0])))
            std::cerr << "Error\n";
        
    }

}
bool RPN::is_opt(std::string c){
    return(c == "+" || c == "-" || c == "/" || c == "*");
}