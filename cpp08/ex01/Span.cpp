#include "Span.hpp"

Span::Span(): N(5){
}

Span::Span(unsigned int num) : N(num){

}
Span::Span(Span const &other){
    *this = other;
}
Span &Span::operator=(Span const &other){
    if (this != &other) {
        N = other.N;
        Numbers.clear();  
        Numbers = other.Numbers;  
    }
    return *this;
}
Span::~Span(){
}

void Span::addNumber(unsigned int num){
    if(Numbers.size() >= N)
        throw std::out_of_range("Span is full.");
    Numbers.push_back(num);
}

int Span::shortestSpan() 
{
    std::vector<int> shortspan;
    size_t i = 0;
    int minspan = 0;
    if(Numbers.size() < 2)
        throw std::out_of_range("Span with less than two numbers.");
    while(i < Numbers.size())
    {
        minspan =  std::abs(Numbers[i] - Numbers[i + 1]);
        shortspan.push_back(minspan);
        i++;
    }
    return(*(std::min_element(shortspan.begin(), shortspan.end())));
}

int Span::longestSpan()
{
    if(Numbers.size() < 2)
        throw std::out_of_range("Span with less than two numbers.");
    return(*(std::max_element(Numbers.begin(), Numbers.end())) - *(std::min_element(Numbers.begin(), Numbers.end())));
}

void Span::addNumbers(std::vector<int> &nums)
{
     if (Numbers.size() + nums.size() > N) {
            throw std::out_of_range("Adding these numbers exceeds the capacity of the Span.");
        }
        Numbers.insert(Numbers.end(), nums.begin(), nums.end());
}
