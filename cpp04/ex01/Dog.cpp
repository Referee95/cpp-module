#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor called\n";
	this->type = "Dog";
	Dog_Brain = new Brain();
}

Dog::Dog( const Dog & other) : Animal(other)
{
	std::cout << "Dog copy constructor called\n";
	Dog_Brain = 0;
	*this = other;
}

Dog &Dog::operator=( Dog const & other)
{
	std::cout << "Dog copy assignment operator called\n";
	if ( this != &other )
	{
		this->type = other.type;
		if(Dog_Brain != 0)
			delete this->Dog_Brain;
		this->Dog_Brain = new Brain(*(other.Dog_Brain));
	}
	return *this;
}

Dog::~Dog(){
	delete Dog_Brain;
	std::cout << "Dog Destructor called\n";
}
void Dog::makeSound(void) const {
	std::cout << "Dog sound woof\n";
}
std::string Dog::getType(void) const{
	return(this->type);
}


