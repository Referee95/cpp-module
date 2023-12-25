#include "WrongCat.hpp"


WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat constructor called\n";
	this->type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat & other ) : WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor called\n"; 
	*this = other;
}


WrongCat &WrongCat::operator=( WrongCat const & other )
{
	std::cout << "WrongCat copy assignment operator called\n";
	if ( this != &other )
	{
		this->type = other.type;
	}
	return *this;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat Destructor called\n";
}
void WrongCat::makeSound(void) const {
	std::cout << "WrongCat sound myaaaw\n";
}

std::string WrongCat::getType(void) const {
	return(this->type);
}