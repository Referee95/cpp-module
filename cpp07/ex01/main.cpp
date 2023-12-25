#include"iter.hpp"

template<typename T>
void print(T &element)
{
    std::cout << element << " ";
}

int main(){
    
    std::string str[] = {"youssef", "khalil", "referee", "\n"};
    ::iter(str, 4 , print<std::string>);
    
    int n[] = {1,3,3,7};
    ::iter(n, 4 , print<int>);

}