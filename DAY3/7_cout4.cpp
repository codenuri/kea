// cout4.cpp
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	friend std::ostream& operator<<(std::ostream& os, const Point& pt);
};

// 핵심 : 사용자 정의 타입의 객체를 cout 으로 출력하려면 아래 처럼
//       operator<< 를 일반함수로 만들면 됩니다.
std::ostream& operator<<(std::ostream& os, const Point& pt)
{
	std::cout << pt.x << ", " << pt.y;
	return os;
}

int main()
{
	Point p1(1, 1);

	std::cout << p1; // cout.operator<<(Point) 가 필요 하다. 
					// 1. 당연히 표준 cout 에는 없다.
					// 2. 사용자가 ostream 클래스에 멤버로 추가할수도 없다.
					// 해결책 : 연산자 재정의 는 멤버 뿐 아니라 non-member도 가능하다.
					// operator<<(cout, p1)
}

