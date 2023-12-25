#include "Base.hpp"

Base * generate(void){
    int rnum = std::rand() % 3;
    switch(rnum)
    {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2 :
            return new C();
        default :
            return nullptr;
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "C" << std::endl;
    }
    else 
        std::cout << "unknown type."<< std::endl;
}

void identify(Base& p) {
    try {
       A& tmp = dynamic_cast<A&>(p);
       (void)tmp;
        std::cout << "A" << std::endl;
    } catch (const std::bad_cast&) {
        try {
            B& tmp = dynamic_cast<B&>(p);
            (void)tmp;
            std::cout << "B" << std::endl;
        } catch (const std::bad_cast&) {
            try {
               C& tmp = dynamic_cast<C&>(p);
               (void)tmp;
                std::cout << "C" << std::endl;
            } catch (const std::bad_cast&) {
                std::cout << "Unknown type." << std::endl;
            }
        }
    }
}

int main() {
    
    std::srand(std::time(0));
    for (int i = 0; i < 5; ++i) {
        Base* ptr = generate();
        std::cout << "Identifying using pointer: ";
        identify(ptr);
        std::cout << "Identifying using reference: ";
        identify(*ptr);
        delete ptr;
        std::cout << std::endl;
    }
    return 0;
}