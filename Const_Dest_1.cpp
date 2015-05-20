#include <iostream>

class Base
{
public:
	Base() {std::cout << "Base Const\n";}
	~Base() {std::cout << "Base Dest\n";}
Base (const Base& copy){std::cout << "Base Copy Const\n";}
Base& operator= (const Base& copy) {std::cout << "Base Copy assignment\n";}
	
};

class Sub1 : public Base 
{
public:
	Sub1() {std::cout << "Sub1 Const\n";}
	~Sub1() {std::cout << "Sub1 Dest\n";}
Sub1 (const Sub1& copy){std::cout << "Sub1 Copy Const\n";}
Sub1& operator= (const Sub1& copy) {std::cout << "Sub1 Copy assignment\n";}
};

class Sub2 : public Sub1 
{
public:
	Sub2() {std::cout << "Sub2 Const\n";}
	~Sub2() {std::cout << "Sub2 Dest\n";}
Sub2 (const Sub2& copy){std::cout << "Sub2 Copy Const\n";}
Sub2& operator= (const Sub2& copy) {std::cout << "Sub2 Copy assignment\n";}
};


int main ()
{
	Base b ;
	Sub1 s1;
	Sub1 s11;
	s1 = s11;//copy assignment
	Base c = b ;//copy const.
	Base d ;
	d = c ;//copy assignment
	Base h(c);//copy const.
	
	
	return 0 ;
}