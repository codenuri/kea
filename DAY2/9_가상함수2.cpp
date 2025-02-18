// 7_가상함수1  143 page ~
#include <iostream>

class Animal
{
public:
	// non-virtual : C++ 기본 바인딩인 static binding 하라는 것
	//				 호출시 포인터 타입으로 함수를 결정해 달라
	void Cry1() { std::cout << "Animal Cry1" << std::endl; }


	// virtual : dynamic binding 해달라는 것
	//			 호출시, 포인터 타입이 아니라, 실행시 메모리를 조사해서 객체의 종류에 따라
	//			 호출을 결정해 달라.
	virtual void Cry2() { std::cout << "Animal Cry2" << std::endl; }
};

class Dog : public Animal
{
public:
	void Cry1() { std::cout << "Dog Cry2" << std::endl; } 
	

	virtual void Cry2() { std::cout << "Dog Cry2" << std::endl; }
};

int main()
{
	Animal a; 
	Dog    d; 

	Animal* p = &d;

	p->Cry1();	// static  binding 이므로 Animal Cry1
	p->Cry2();	// dynamic binding 이므로 Dog Cry2


}
