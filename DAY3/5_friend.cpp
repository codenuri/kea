#include <iostream>

// friend   79p ~

class Bike
{
	int gear = 0;
public:
//	void setGear(int n) { gear = n; }


	// friend �Լ�
	// => ��� �Լ��� �ƴ����� private �� �����Ҽ� �ִ�.

	// 1. setter/getter �� ���� �����ϸ���� �ʳ��� ?
	// => setter/getter �� ����� ���� ��ο��� ���ٱ�ȸ�� �ο� �Ѱ�
	// => �Ѱ��� �Լ����Ը� ���� ������ �ο� �Ѱ�

	// 2. ��� �Լ��� ����� ���� �ʳ��� ?
	// => ��� �Լ��� ����� �������� �ֽ��ϴ�.(������ ������ ���)

	// 3. private �� �ܺο��� ���ٰ����ϰ� �ϴ� ���̹Ƿ�
	//    ��ü���� ���������� ���۰� �ƴѰ��� ?
	// => �½��ϴ�. �׷��� C++���� ��κ��� ���� �� ������ �����ϴ�.
	// => C++ ������ ���� �ִ� �����Դϴ�.

	friend void fixBike(Bike& b);
};



void fixBike(Bike& b)
{
	b.gear = 10;
}

int main()
{
	Bike b;
	fixBike(b);
}