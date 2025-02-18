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


int main()
{
	std::cout << Car::count << std::endl; // 0

	Car c1;
	Car c2;

	std::cout << Car::count << std::endl; // 2


}

