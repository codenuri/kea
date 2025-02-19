#include <iostream>

// 반드시 알아야할 필수 문법
// => 상속 문법을 사용한다면
// => 기반 클래스 소멸자를 반드시 virtual 하세요
// => "가상소멸자" 라고 불리는 문법

class Base
{
public:
	Base()  {  }
//	~Base() {  }
	virtual ~Base() {} // 핵심 : 기반 클래스의 소멸자는 virtual 이어야 합니다.
						// 기반 클래스 소멸자가 virtual 이면
						// 모든 파생 클래스 소멸자도 자동으로 virtual 입니다.
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
	Base* p = new Derived;	// 1. sizeof(Derived) 메모리 할당
							// 2. 생성자 호출 - 코드에 Derived 클래스라고 표기했으므로
							//					Derived 생성자 호출
	
	delete p;	// 1. 소멸자 호출
				// 2. 메모리 해지

	// 소멸자도 함수 이므로 결국 아래 같은 의미가 됩니다.
	// p->소멸자()
	// 결국 함수 호출이므로 static binding 할지 dynamic binding 할지 결정해야 합니다

	// 1. 컴파일 시간에는 p 가 가리키는 곳은 알수 없고, p 자체의 타입이 Base* 라는것만알고
	//    있습니다.

	// 2. 그래서 Base 클래스의 선언을 보고 소멸자가 virtual 인지 조사

	// 소멸자 virtual 이 아니면 : static binding 하므로 포인터 타입으로 소멸자 결정
	//							p->~Base() 만 호출.

	// 소멸자 virtual 이면 : dynamic binding 하므로 메모리 조사해서 호출 결정
	//							p->~Derived()  

}