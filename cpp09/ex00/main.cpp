#include<iostream>
#include <string>
// int check_av(std::string *av)
// {
//     if(av.length())
// }
int main(int ac, char **av){
    if(ac == 2)
    {
        if(!(strcmp(av[1], ".btc")))
            std::cout << "howa\n";
        else
            std::cout << "machi howa\n";
    }
}
