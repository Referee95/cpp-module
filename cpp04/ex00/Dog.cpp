#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor called\n";
	this->type = "Dog";
}

Dog::Dog( const Dog & other) : Animal(other)
{
	std::cout << "Dog copy constructor called\n";
	*this = other;
}

Dog &Dog::operator=( Dog const & other)
{
	std::cout << "Dog copy assignment operator called\n";
	if ( this != &other )
	{
		this->type = other.type;
	}
	return *this;
}

Dog::~Dog(){
	std::cout << "Dog Destructor called\n";
}
void Dog::makeSound(void) const {
	std::cout << "Dog sound woof\n";
}
std::string Dog::getType(void) const{
	return(this->type);
}


