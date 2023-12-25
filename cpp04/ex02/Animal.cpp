#include "Animal.hpp"


Animal::Animal()
{
	std::cout << "Animal constructor called\n";
	this->type = "Animal";
}

Animal::Animal( const Animal & other )
{
	std::cout << "Animal copy constructor called\n"; 
	*this = other;
}


Animal &Animal::operator=( Animal const & other )
{
	std::cout << "Animal copy assignment operator called\n";  
	if ( this != &other )
	{
		this->type = other.type;
	}
	return *this;
}

Animal::~Animal(){
	std::cout << "Animal Destructor called\n";
} 

std::string Animal::getType(void) const{
	return(this->type);
}