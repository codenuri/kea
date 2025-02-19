#include <iostream>

// Derived 소멸자에서 하는 일이 없거나,
// Base* p = new Derived 같은 상태로 만든후 delete p 하는 코드가 없다면
// 소멸자를 virtual 로하지 않아도 됩니다.

// 단, 이경우는 Base* 로 delete 를 못하게 하는 것이 안전합니다.
// => protected 소멸자!

class Base
{
public:
	Base() {}

protected:
	~Base() {} 
};

class Derived : public Base
{
public:
	Derived() { std::cout << "Derived()  자원할당" << std::endl; }
	~Derived() 
	{ 
		std::cout << "~Derived() 자원반납" << std::endl; 
		// Base::~Base()
	}
};

int main()
{
	Base* p = new Derived;	

//	delete p;	// 이순간 p->~Base() 를 호출해야 하는데,
				// 소멸자가 protected 에 있으므로 컴파일 에러

	// delete 하려면 반드시 "Derived" 타입으로 캐스팅해서 하라는 의도
	delete static_cast<Derived*>(p);

}

// C++ 문법이 너무 어렵고 복잡해서 C++ 창시자가 가이드 라인을 작성하고 있습니다
// => 구글에서 "C++ Core guidelines" 검색 후 1번째 링크
// 
// => 자동차 진영의 "MISRA C++" 도 결국 위 가이드라인을 참고해서 작성