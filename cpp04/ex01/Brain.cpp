#include "Brain.hpp"
Brain::Brain(){
    std::cout << "Brain Constructor called\n";
}
Brain::Brain(const Brain & other){
    std::cout << " Brain copy Constructor called\n";
    int i = -1;
    while(++i < 100)
        this->ideas[i] = other.ideas[i];

}
Brain &Brain:: operator=(Brain const &other){
    std::cout << "Barin copy aasignment operator called\n";
    int i = -1;
    while(++i < 100)
        this->ideas[i] = other.ideas[i];
    return(*this);
}
Brain::~Brain(){
    std::cout << "Brain Destructor called\n";
}