// cout4.cpp
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	friend std::ostream& operator<<(std::ostream& os, const Point& pt);
};

// �ٽ� : ����� ���� Ÿ���� ��ü�� cout ���� ����Ϸ��� �Ʒ� ó��
//       operator<< �� �Ϲ��Լ��� ����� �˴ϴ�.
std::ostream& operator<<(std::ostream& os, const Point& pt)
{
	std::cout << pt.x << ", " << pt.y;
	return os;
}

int main()
{
	Point p1(1, 1);

	std::cout << p1; // cout.operator<<(Point) �� �ʿ� �ϴ�. 
					// 1. �翬�� ǥ�� cout ���� ����.
					// 2. ����ڰ� ostream Ŭ������ ����� �߰��Ҽ��� ����.
					// �ذ�å : ������ ������ �� ��� �� �ƴ϶� non-member�� �����ϴ�.
					// operator<<(cout, p1)
}

