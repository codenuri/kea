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
		// call Base::Base() <= 상속 문법 사용시 컴파일러가 추가한 코드

		std::cout << "Derived()" << std::endl; 
	} 
	Derived(int a)  
	{ 
		// call Base::Base() <= 핵심. 컴파일러가 추가한 것은 항상 디폴트 생성자 호출

		std::cout << "Derived(int)" << std::endl; 
	}

	~Derived()      
	{ 
		std::cout << "~Derived()" << std::endl; 

		// call Base::~Base() <= 소멸자는 Derived 소멸자의 제일 마지막 부분에서 호출
	}
};

int main()
{
//	Derived d1;	
	Derived d2(5);
}



// C++을 잘하려면
// => 사용자가 만든 코드 외에, 컴파일러가 추가하는 코드를 정확히 이해 해야 합니다.


// 사용자가 만든 코드만 있으면 되지 왜?? 컴파일러가 추가 하는가 ?
// 그냥. 사용자 코드만 실행하자. 볼수 있는것만, 실행되게 하자.
// => Zig 언어.. 나중에 찾아 보세요..
