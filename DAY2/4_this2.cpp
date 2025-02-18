#include <iostream>

// this 키워드 활용

class Point
{
	int x, y;
public:
	void set(int x, int y) 
	{
//		x = x;	// 모두 함수인자(지역변수)의 x

		this->x = x; // 활용 #1. 멤버 데이타임을 명확히 하고 싶을때
		this->y = y; 
	}

	// #2. this 또는 *this 를 반환하면
	//     멤버 함수의 호출을 연속적으로 할수 있습니다.
	Point* foo() { return this; }
	Point& goo() { return *this; }
		// => 주의, 자신을 값 타입으로 반환할때는 value 가 아닌(복사본 생성됨)
		// => 반드시 reference(별명) 으로 반환해야 합니다.
};
int main()
{
	Point p1;
	p1.set(10, 20);

	p1.foo()->foo()->foo();
	p1.goo().goo().goo(); // 이 코드가 cout 의 원리 입니다.

	std::cout << "A" << "B" << "C";

//	std::cout.operator<<("A").operator<<("B").operator<<("C")


}
