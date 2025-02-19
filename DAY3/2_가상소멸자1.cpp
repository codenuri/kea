#include <iostream>

// 반드시 알아야할 필수 문법

class Base
{
public:
	Base()  {  }
	~Base() {  }
};
class Derived : public Base
{
public:
	Derived()  { std::cout << "Derived()  자원할당" << std::endl; }
	~Derived() { std::cout << "~Derived() 자원반납" << std::endl; }
};

int main()
{
//	Derived d;	// ok

//	Derived* p = new Derived;
//	delete p;	// ok

	// 핵심은 아래 코드입니다.
	Base* p = new Derived;
	delete p;	

}