#include <iostream>


class Car
{
	int color;
	int speed;
public:
	static int count;	

	Car() { ++count; }
	~Car() { --count; }
};

int Car::count = 0;

// static ��� ����Ÿ�� Ư¡(�ǹ�)
// 1. 

int main()
{
	Car c1;
	Car c2;
	std::cout << Car::count << std::endl;
}

