#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const int n_animal = 18; 
    const Animal* Anl[n_animal];
    
    for(int index = 0; index < n_animal / 2; index++){
        Anl[index] = new Dog();
    }
    for(int index = n_animal / 2 ; index < n_animal ; index++){
        Anl[index] = new Cat();
    }
    for (int index = 0; index < n_animal; index++){
        delete Anl[index];
    }

    delete j;//should not create a leak
    delete i;
    return(0);
}