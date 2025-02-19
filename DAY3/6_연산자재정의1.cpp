//  5_연산자재정의 - 162p~
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	void print() const 	{ std::cout << x << ", " << y << std::endl;	}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// 연산자 재정의란 ?
	// => 사용자 정의 타입의 객체에 대해서, +, - 등의 연산자를 사용가능하게 하는 문법
	// => Java 를 제외한 대부분의 언어에서 지원

	Point p3 = p1 + p2; // 현재는 에러!!!
						// => 이순간 약속된 함수를 호출하므로. 해당 함수를 만들면된다.
						// => 아래 2개중에 한개만 만들면 됩니다.
						// 1. operator+(p1, p2)  <== 멤버가 아닌 일반 함수로 구현
						// 2. p1.operator+(p2)   <== 멤버 함수로 구현
}

