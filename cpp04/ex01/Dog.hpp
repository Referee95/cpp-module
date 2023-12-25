#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal 
{

	public:

		Dog();
		Dog( Dog const & other );
		~Dog();
		Dog &operator=( Dog const & other );
		void makeSound() const;
		std::string getType(void) const;
	private:
		Brain *Dog_Brain;

};


#endif 