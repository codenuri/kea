//  5_연산자재정의 - 162p~
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }


	friend Point operator+(const Point& p1, const Point& p2);
};

// 멤버가 아닌 일반 함수로 구현한 연산자 재정의 함수
Point operator+(const Point& p1, const Point& p2)
{
	Point tmp(p1.x + p2.x, p1.y + p2.y);

	return tmp;
}

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2; // operator+(p1, p2)

	p3.print();

}

