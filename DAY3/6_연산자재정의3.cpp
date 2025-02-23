//  5_연산자재정의 - 162p~
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }


	// 멤버 함수로 구현한 operator+
	// + 는 이항연산자 이지만 멤버 함수로 만들면 인자가 1개가 된다.
	// => p1 + p2 에서 p1이 상수라도 + 가 되어야 합니다.
	// => p1.operator+(p2) 가 가능해야 하므로 아래 함수는 const 멤버 함수 이어야합니다.
	Point operator+(const Point& p) const 
	{
		Point tmp(x + p.x, y + p.y);

		return tmp;
	}
};

int main()
{
	const  Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2; // operator+(p1, p2) 또는
						// p1.operator+(p2) 를 찾게 됩니다.
	p3.print();
}

