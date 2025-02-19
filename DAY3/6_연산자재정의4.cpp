//  5_������������ - 162p~
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

	// ��ó��, ��� ������ non-��� ������ ���ÿ� �����ϸ� �ȵ˴ϴ�.
	// �ݵ�� �Ѱ��� �����ؾ� �մϴ�.
	Point p3 = p1 + p2; 
	p3.print();

	// ����� ������� ? non-����� ������� ?
	// ����� ���ٴ� �ǰ�     : private ������ ���� �Ϸ��� ��� �Լ��� ���ϴ�.
	// non-����� ���ٴ� �ǰ� : ����Լ��� ����� �������� �ִ�.

	Point p4 = p1 + p2;	// p1.operator+(Point)
	Point p5 = p1 + 3;	// p1.operator+(int)
	Point p6 = 3  + p1; // 3.operator+(Point) �ε�, ����� ����. �̰��� ����Լ��� ����� ����.
						// operator+(int, Point) ��, non-����Լ��δ� �����ϴ�.

	// ��� : 1��° ���ڰ� �ٸ� Ÿ���� �ɼ� �ִ� �����ڴ� "non-member" ����
	//        �׷��� ���� �����ڴ� "member" ����

	// +, -, *, / ...  : non-member
	// +=, -= ..       : member ����
	// p1 += 3;

}

