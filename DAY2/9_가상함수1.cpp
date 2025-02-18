// 7_가상함수1  143 page ~
#include <iostream>

class Animal
{
public:
	void Cry1() { std::cout << "Animal Cry1" << std::endl; } // 1
};

class Dog : public Animal
{
public:
	// function override : 기반 클래스 멤버 함수를 파생 클래스가 다시 만드는 것	
	void Cry1() { std::cout << "Dog Cry" << std::endl; }  // 2
};

int main()
{
	Animal a; a.Cry1(); // 1
	Dog    d; d.Cry1(); // 2

	Animal* p = &d;		

	// p 자체의 타입      : Animal*
	// p 가 가리키는 객체 : Dog
	p->Cry1(); // 1 ? 2 

	// C++, C#			   : Animal Cry1 - static binding
	// java, swift, python : Dog Cry1    - dynamic binding
}

// p->Cry1() 을 어떤 함수와 연결할것인가 ?
// => 함수 바인딩(function binding) 이라고 합니다

// 1. static binding : 컴파일러가 컴파일 시간에 연결할 함수를 결정하는 것
//					   핵심) 컴파일러는 p 가 가리키는 곳이 어떤 타입의 객체인지 알수없다
//					   그래서, 컴파일러가 함수 를 결정하면 p 자체의 타입인 Animal* 로
//					   결정. 즉, Animal Cry1

// 빠르다, 하지만 논리적이지 못하다.
// C++, C# 언어의 기본 바인딩 정책


// 2. dynamic binding : 컴파일 시간에 p가 가리키는 곳을 조사하는 기계어 코드 생성
//						실행시간에 p가 가리키는 객체를 조사해서 함수를 결정
//						Dog 객체를 가리켰다면 Dog Cry1 호출

// 논리적이지만 약간 느리다.
// Java, Swift, Python 의 방식
// C++/C# 의 virtual function 
