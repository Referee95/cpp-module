#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{

	public:

		Cat();
		Cat( Cat const & other);
		Cat &operator=( Cat const & other);
		 ~Cat();
		std::string getType(void) const;
		 void makeSound() const;
	private:
		Brain *Cat_Brain;
};


#endif