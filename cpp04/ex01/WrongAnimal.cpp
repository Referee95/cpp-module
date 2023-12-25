#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called\n";
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal( const WrongAnimal & other )
{
	std::cout << "WrongAnimal copy constructor called\n"; 
	*this = other;
}


WrongAnimal &WrongAnimal::operator=( WrongAnimal const & other )
{
	std::cout << "WrongAnimal copy assignment operator called\n";  
	if ( this != &other )
	{
		this->type = other.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal Destructor called\n";
} 

void WrongAnimal::makeSound(void) const{
	std::cout << "WrongAnimal sound\n";
}

std::string WrongAnimal::getType(void) const{
	return(this->type);
}