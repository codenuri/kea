// 상속과 생성자.   135page ~
#include <iostream>

// 상속에서는 "생성자/소멸자" 호출 원리
class Base
{
public:
	Base()      { std::cout << "Base()"  << std::endl; }
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base()     { std::cout << "~Base()" << std::endl; }
};

class Derived : public Base
{
public:
	// 상속에서의 생성자 호출의 원리 - 컴파일러가 아래 주석 부분의 코드를 추가한것
	Derived()       
	{ 
		std::cout << "Derived()" << std::endl; 
	} 
	Derived(int a)  
	{ 
		std::cout << "Derived(int)" << std::endl; 
	}
	~Derived()      
	{ 
		std::cout << "~Derived()" << std::endl; 
	}
};

int main()
{
//	Derived d1;	
	Derived d2(5);
}




