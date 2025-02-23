﻿// 6_Upcasting1.cpp      139 page ~
#include <vector>

class Animal
{
public:	
	int age;
};

class Dog : public Animal
{
public:	
	int color;
};

int main()
{
	Dog     dog;

	Dog*    p1 = &dog; // ok
	
//	int*    p2 = &dog; // error
	
	// 핵심 #1. upcasting
	// => 파생클래스 객체의 주소는 기반 클래스 포인터로 암시적 형변환 된다.
	// => 기반 클래스 포인터로 파생 클래스 객체를 가리킬수 있다.
	// => 이유는 "메모리 그림"을 그려 보세요
	// => Dog 객체의 메모리 윗부분은 "Animal"에서 물려 받은 멤버가 있으므로 
	Animal* p3 = &dog; // ok


	// 핵심 #2. 컴파일 시간에 컴파일러는 p3가 가리키는 객체가 실제 어떤 타입인지는 알수 없다.
	// => p3는 변수 이므로 실행시간에 변경될수 있으므로
	// => 아래 코드 참고.
//	if (사용자입력 == 1) p3 = &animal_object;


	// 핵심 #3. Animal* 인 p3로는 Animal로 부터 상속받은 멤버만 접근 가능하다.

	// C++    : static type check 언어
	// python : dynamic type check

	// static type check : 코드(타입)의 유효성을 컴파일 시간에 조사
	//					   즉, 컴파일러가 자신이 아는 타입으로 멤버 접근이 가능한지 조사
	//					   => C++컴파일러는 p3가 가리키는 객체를 알수 없다.
	//					   => C++컴파일러는 p3 자체 타입인 Animal* 만 알고 있다.

	p3->age = 10;	// ok
//	p3->color = 10; // error


	// 핵심 #4. p3를 사용해서 color 멤버에 접근하려면
	// => p3를 Dog* 타입으로 캐스팅해야 한다

	static_cast<Dog*>(p3)->color = 10; // ok
				// 단, 이경우 p3가 가리키는 곳이 Dog 객체라는 확신이 있어야 한다.
				// 만일 Dog 객체가 아니였다면 미정의 동작(undefined behavior) 발생


	// [참고] p3가 가리키는 곳에 어떤 객체가 있는지 조사는 안되나요 ?
	// 
	// => 가능합니다. RTTI 또는 dynamic_cast
	// => 단, 실행시간에 조사하는 것 입니다.
	// => 컴파일 시간에 알수 있는 방법은 없음(실행시 변경가능하므로)
}




