#include "Span.hpp"

int main()
{
    try{
        std::vector<int> numbers;
        std::srand(std::time(0));
        for(unsigned int i = 0; i <= 10; i++){
           numbers.push_back(rand());
        }
        Span sp = Span(20);
        sp.addNumber(10000);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.addNumbers(numbers);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}