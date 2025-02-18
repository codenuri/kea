#include <iostream>

// 방법 #2. 전역변수 count 사용
// => 전역변수는 모든 Car 객체가 공유 할수 있다.
// => 객체의 갯수 파악 성공..

// 그런데, 단점이 있다.
// #1. Car 의 멤버 함수 뿐 아니라 어디서든지 접근 가능하다. 안정성이 없다.
//     => private 으로 보호 할수 없을까 ?
// 
// #2. 이름 충돌의 가능성이 있다.
//	   Bike, Boat 등의 클래스도 객체의 갯수를 파악하고 싶다면...
//	   count 라는 이름이 아닌 다른 이름을 사용해야 한다.


int count = 0;

class Car
{
	int color;
	int speed;
public:
	Car() { ++count; }
	~Car() { --count; }
};

int main()
{
	Car c1;
	Car c2;

	count = -10; // 전역변수는 누구나 접근 가능하다.

	std::cout << count << std::endl;
}

