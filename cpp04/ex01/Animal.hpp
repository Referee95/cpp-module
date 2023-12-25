#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:

		Animal();
		Animal( Animal const & src );
		Animal &operator=( Animal const & rhs );
		virtual ~Animal();
		virtual void makeSound() const;
		std::string getType(void) const;

	protected:
		std::string type;

};

#endif 