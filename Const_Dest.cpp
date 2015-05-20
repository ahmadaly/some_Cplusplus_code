#include <iostream>

class Base
{
public:
	Base() {std::cout << "Base Const\n";}
	~Base() {std::cout << "Base Dest\n";}
};
class Sub1 : public Base
{
public:
	Sub1() {std::cout << "Sub1 Const\n";}
	~Sub1() {std::cout << "Sub1 Dest\n";}
};
class Sub2 : public Sub1
{
public:
	Sub2() {std::cout << "Sub2 Const\n";}
	~Sub2() {std::cout << "Sub2 Dest\n";}
};


int main ()
{
std::cout << "Constructors\n";
	Base *b = new Base();
	Sub1 *s1 = new Sub1();
	Sub2 *s2 = new Sub2();
std::cout << "Destructors\n";	
	delete b ;
	delete s1;
	delete s2;
	return 0 ;
}