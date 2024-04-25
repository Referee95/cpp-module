#pragma once

#include <iostream>
#include <stack>
#include <sstream>

class RPN{
    private :
        std::stack<int> rpn;
    public:
        RPN();
        ~RPN();
        RPN(RPN const &);
        RPN &operator=(RPN const &);
        int R_P_N(std::string);
        bool is_opt(std::string);
        int check_operator(int  , int , std::string);
};
