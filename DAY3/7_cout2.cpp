
// cout �� ���� ����� ���ô�.
//#include <iostream>
#include <cstdio>

namespace std
{
	class ostream
	{
	public:
	};

	ostream cout; // �ᱹ cout �� �������� �Դϴ�.
}



int main()
{
	int    n = 10;
	double d = 3.4;

	std::cout << n;	// std::cout.operator<<(int n)
	std::cout << d; // std::cout.operator<<(double n)

}


