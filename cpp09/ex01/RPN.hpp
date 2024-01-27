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
        void R_P_N(std::string);
        bool is_opt(std::string c);
};
