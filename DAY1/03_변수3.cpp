#include <iostream>

struct Point
{
	int x, y;
};

void foo(int n)    {} 
void goo(Point pt) {}

int main()
{
	Point p = { 1,2 };

	// {} 초기화 때문에, C++ 코드에 많은 변화가 생겼습니다.
	foo(3);			// int n = 3
	foo({3});		// int n = {3}
	goo({1, 2});	// Point pt = {1,2}

	goo(p);	
}





