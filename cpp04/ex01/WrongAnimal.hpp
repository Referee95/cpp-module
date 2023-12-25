#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal 
{

	public:

		WrongAnimal();
		WrongAnimal( WrongAnimal const & other );
		~WrongAnimal();
		WrongAnimal &operator=( WrongAnimal const & other );
		void makeSound() const;
		std::string getType(void) const;

	protected :
		std::string type;
};

#endif 