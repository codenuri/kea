//  5_연산자재정의 - 162p~
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);


	Point p3 = p1 + p2; // operator+(p1, p2) 또는
						// p1.operator+(p2) 를 찾게 됩니다.
}

