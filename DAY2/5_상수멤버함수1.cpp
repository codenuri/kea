// 4_상수멤버함수1.cpp    104page~
#include <iostream>

// 현직 C++ 초급 개발자가 가장 잘못 사용하고 있는 문법

class Point
{
public:
	int x, y;
	Point(int a = 0, int b = 0) : x(a), y(b) {}

	void set(int a, int b) { x = a; y = b; }

	// 상수 멤버 함수 문법
	// => 멤버 함수() 뒤에 const 를 붙이는 문법
	// => 멤버 함수안에서 멤버 데이타를 변경하지 않겠다고 컴파일러에게 알리는 것
	// 
	// 특징 #1. 상수 멤버 함수 안에서 멤버 데이타를 수정할수 없다.
	// 특징 #2. 상수 객체는 상수멤버 함수만 호출가능하다.
	
	void print() const 
	{	
//		x = 100; // error

		std::cout << x << ", " << y << std::endl;
	}
};


int main() 
{
	const Point p(1, 2);
	
	// 핵심 : p 는 상수 객체 입니다.

	p.x = 10;		// error. x 는 public 이지만, 상수이므로	
	p.set(10, 20);	// error. 

	p.print();		// error. 상수 멤버 함수가 아닌경우
					// ok. print() 를 상수 멤버 함수로 했다면
}

