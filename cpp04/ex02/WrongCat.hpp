#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

	public:

		WrongCat();
		WrongCat( WrongCat const & other );
		~WrongCat();
		WrongCat &operator=( WrongCat const & other );
		void makeSound() const;
		std::string getType(void) const;

};

#endif 