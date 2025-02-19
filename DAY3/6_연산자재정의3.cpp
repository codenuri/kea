//  5_������������ - 162p~
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }


	// ��� �Լ��� ������ operator+
	// + �� ���׿����� ������ ��� �Լ��� ����� ���ڰ� 1���� �ȴ�.
	// => p1 + p2 ���� p1�� ����� + �� �Ǿ�� �մϴ�.
	// => p1.operator+(p2) �� �����ؾ� �ϹǷ� �Ʒ� �Լ��� const ��� �Լ� �̾���մϴ�.
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

	Point p3 = p1 + p2; // operator+(p1, p2) �Ǵ�
						// p1.operator+(p2) �� ã�� �˴ϴ�.
	p3.print();
}

