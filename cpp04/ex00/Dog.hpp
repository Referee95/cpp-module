#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
#include "Animal.hpp"

class Dog : public Animal 
{

	public:

		Dog();
		Dog( Dog const & other );
		virtual ~Dog();
		Dog &operator=( Dog const & other );
		void makeSound() const;
		std::string getType(void) const;
};


#endif 