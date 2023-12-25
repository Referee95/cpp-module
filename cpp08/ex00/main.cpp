#include <iostream>
#include <vector>
#include <array>
#include "easyfind.hpp"

int main() {

    std::vector<int> Vector;
    Vector.push_back(10);
    Vector.push_back(20);
    Vector.push_back(30);

    if(::easyfind(Vector, 30))
        std::cout << "Element found\n";
    else
        std::cout << "Element not found\n";
    std::array<int , 5> Array1 = {1 , 3 ,4};

    if(::easyfind(Array1, 2))
        std::cout << "Element found\n";
    else
        std::cout << "Element not found\n";

}