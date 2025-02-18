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

