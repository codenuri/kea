#include <iostream>

class Animal
{
	int age;
public:
	virtual void cry() {}
	virtual void run() {}
};

class Dog : public Animal
{
	int color;
public:
	void cry() override {}
};

class Cat : public Animal
{
	int speed;
public:
	void cry() override {}
};

int main()
{
	Dog d;
	Cat c;

	Animal* p = &c;

	// p 가 가리키는 것은 현재 Dog 가 아닌 Cat 입니다.
	// 그런데, Dog* 로 캐스팅 하려고 합니다.

	// static_cast : 컴파일 시간 캐스팅
	//			     컴파일러는 p 가 가리키는 곳을 알수 없습니다.
	//				 아래 코드가 잘못되었지만, 컴파일러는 알수 없습니다.
	//				 개발자의 요청이므로 무조건 허용합니다.
	//				 pd1 에 있는 주소는 Cat 인데, Dog 처럼 사용하므로 버그.
	Dog* pd1 = static_cast<Dog*>(p);

	std::cout << pd1 << std::endl;

	// dynamic_cast : 실행시간 캐스팅
	//				실행시간에 가상함수 테이블에 있는
	//				type 정보를 확인해서 캐스팅
	//				타입이 다른 경우 0 반환
	Dog* pd2 = dynamic_cast<Dog*>(p);

	std::cout << pd2 << std::endl; // 0
}
