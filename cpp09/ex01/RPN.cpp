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
int RPN::check_operator(int num1 , int num2, std::string op){
    switch (op[0])
    {
    case '+':
        return (num1 + num2);
    case '-':
        return (num1 - num2);
    case '*':
        return (num1 * num2);
    case '/':
        if(num2 == 0)
            throw std::runtime_error("Division by zero");
        return (num1 / num2);
    default:
        throw std::runtime_error("invalid operator");
    }
}
int RPN::R_P_N(std::string input){
    std::stringstream ss(input);
    std::string n_o;
    while(ss >> n_o){
        if(n_o.length() != 1 || (!is_opt(n_o)  && !std::isdigit(n_o[0]))){
            std::cerr << "Error\n";
            exit(1);
        }
        if(std::isdigit(n_o[0])){
            int num = std::atoi(n_o.c_str());
            // std::cout << "here\n";
            rpn.push(num);
        }
        else{
            if(rpn.size() < 2)
                throw std::runtime_error("Error");
            int num2 = rpn.top();
            rpn.pop();
            int num1 = rpn.top();
            rpn.pop();
            int result = check_operator(num1 , num2, n_o);
            rpn.push(result);
        }
        if(rpn.size() != 1)
            std::runtime_error("Error");
    }
    return rpn.top();

}
bool RPN::is_opt(std::string c){
    return(c == "+" || c == "-" || c == "/" || c == "*");
}