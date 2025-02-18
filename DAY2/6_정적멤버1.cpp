// 3_정적멤버1 - 110 page
#include <iostream>

// Car 객체가 몇개나 생성되었는지 갯수를 파악하고 싶다.
// => 생성자에서 ++, 소멸자에서 -- 하면 될거 같다.!!

// 방법 #1. 멤버 데이타 count 사용

class Car
{
	int color;
	int speed;
public:
	int count = 0;

	Car()  { ++count; }
	~Car() { --count; }
};

int main()
{
	Car c1;
	Car c2;

	std::cout << c1.count << std::endl;
}

