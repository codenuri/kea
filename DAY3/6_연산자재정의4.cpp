//  5_연산자재정의 - 162p~
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }


	Point operator+(const Point& p) const
	{
		Point tmp(x + p.x, y + p.y);

		return tmp;
	}

	friend Point operator+(const Point& p1, const Point& p2);
};

Point operator+(const Point& p1, const Point& p2)
{
	Point tmp(p1.x + p2.x, p1.y + p2.y);

	return tmp;
}


int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// 위처럼, 멤버 버전과 non-멤버 버전을 동시에 제공하면 안됩니다.
	// 반드시 한개만 제공해야 합니다.
	Point p3 = p1 + p2; 
	p3.print();

	// 멤버가 좋을까요 ? non-멤버가 좋을까요 ?
	// 멤버가 좋다는 의견     : private 영역에 접근 하려면 멤버 함수가 편하다.
	// non-멤버가 좋다는 의견 : 멤버함수로 만들수 없을때가 있다.

	Point p4 = p1 + p2;
	Point p5 = p1 + 3;
	Point p6 = n  + p1;
}

