 #include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **av){

    int i = 0;
    while(av[++i]){
        std::stringstream ss(av[i]);
        std::string num;
        ss >> num;

        size_t j = 0;
        if(num[j] == '+')
            j++;
        for(; j < num.length(); j++){
            // std::cout <<"(" <<  num[j]  << ")" << std::endl;
            if(!std::isdigit(num[j]))
                throw std::runtime_error("Error: invalid input");
        }
        if(std::strtod(num.c_str(), NULL) > 2147483647)
            throw std::runtime_error("Error: invalid input");
        tmp.push_back(std::strtod(num.c_str(), NULL));
    }
    
}
PmergeMe::~PmergeMe(){

}
PmergeMe::PmergeMe(PmergeMe const &other){
    (void)other;
}

PmergeMe& PmergeMe::operator=(PmergeMe const &other){
    (void)other;
    return *this;
}