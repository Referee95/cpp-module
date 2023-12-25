#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>

class Base
{
	public:
		Base();
		virtual ~Base();
		void identify(Base* p);
		void identify(Base& p);

};

class A: public Base {};
class B: public Base {};
class C: public Base {};


#endif