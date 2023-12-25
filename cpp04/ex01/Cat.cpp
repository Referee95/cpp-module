#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called\n";
	this->type = "Cat";
	Cat_Brain = new Brain();
}

Cat::Cat( const Cat & other ) : Animal(other)
{
	std::cout << "Cat copy constructor called\n"; 
	Cat_Brain = 0;
	*this = other;
}


Cat &Cat::operator=( Cat const & other )
{
	std::cout << "Cat copy assignment operator called\n";
	if ( this != &other )
	{
		this->type = other.type;
		if (Cat_Brain != 0)
			delete this->Cat_Brain;
		this->Cat_Brain = new Brain(*(other.Cat_Brain));
	}
	return *this;
}

Cat::~Cat(){
	delete Cat_Brain;
	std::cout << "Cat Destructor called\n";
}
void Cat::makeSound(void) const {
	std::cout << "Cat sound Meow Meow\n";
}

std::string Cat::getType(void) const {
	return(this->type);
}