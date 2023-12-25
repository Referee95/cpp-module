#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>

class Span{
    private:
        unsigned int N;
        std::vector<int> Numbers;
    public:
        Span();
        Span(unsigned int);
        Span(Span const &);
        Span &operator=(Span const &);
        ~Span();
        void addNumber(unsigned int);
        int shortestSpan();
        int longestSpan();
        void addNumbers(std::vector<int> &);
};
#endif