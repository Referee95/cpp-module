#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template<typename T>
int easyfind(T container, int i){
    if(std::find(container.begin(), container.end(), i) != container.end())
        return 1;
    else
        return 0;
}
#endif
