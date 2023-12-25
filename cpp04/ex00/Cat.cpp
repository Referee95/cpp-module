#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called\n";
	this->type = "Cat";
}

Cat::Cat( const Cat & other ) : Animal(other)
{
	std::cout << "Cat copy constructor called\n"; 
	*this = other;
}


Cat &Cat::operator=( Cat const & other )
{
	std::cout << "Cat copy assignment operator called\n";
	if ( this != &other )
	{
		this->type = other.type;
	}
	return *this;
}

Cat::~Cat(){
	std::cout << "Cat Destructor called\n";
}
void Cat::makeSound(void) const {
	std::cout << "Cat sound Meow Meow\n";
}

std::string Cat::getType(void) const {
	return(this->type);
}