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

	Point p4 = p1 + p2;	// p1.operator+(Point)
	Point p5 = p1 + 3;	// p1.operator+(int)
	Point p6 = 3  + p1; // 3.operator+(Point) 인데, 만들수 없다. 이경우는 멤버함수로 만들수 없다.
						// operator+(int, Point) 즉, non-멤버함수로는 가능하다.

	// 결론 : 1번째 인자가 다른 타입이 될수 있는 연산자는 "non-member" 권장
	//        그렇지 않은 연산자는 "member" 권장

	// +, -, *, / ...  : non-member
	// +=, -= ..       : member 권장
	// p1 += 3;

}

