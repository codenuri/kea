
// cout 을 직접 만들어 봅시다.
//#include <iostream>
#include <cstdio>

namespace std
{
	class ostream
	{
	public:
	};

	ostream cout; // 결국 cout 은 전역변수 입니다.
}



int main()
{
	int    n = 10;
	double d = 3.4;

	std::cout << n;	// std::cout.operator<<(int n)
	std::cout << d; // std::cout.operator<<(double n)

}


