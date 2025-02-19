// cout4.cpp
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}
};

int main()
{
	Point p1(1, 1);

	std::cout << p1; // ??? 
}

