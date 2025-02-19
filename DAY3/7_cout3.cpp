#include <cstdio>

namespace std
{
	class ostream
	{
	public:
		ostream& operator<<(int n)    { printf("%d", n);  return *this; }
		ostream& operator<<(double d) { printf("%lf", d); return *this; }
	};
	ostream cout;
}

int main()
{
	int    n = 10;
	double d = 3.4;

	std::cout << n << d;
	// cout.operator<<(n).operator<<(d)
	

}


