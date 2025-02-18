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

// static ¸â¹ö µ¥ÀÌÅ¸ÀÇ Æ¯Â¡(ÀÇ¹Ì)
// 1. 

int main()
{
	Car c1;
	Car c2;
	std::cout << Car::count << std::endl;
}

