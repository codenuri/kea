#include <cstdio>
// 37 page ~

// C언어   : 동일이름의 함수를 2개 이상 만들수 없다.
// C++언어 : 동일이름의 함수를 2개 이상 만들수 있다.
//			단, 인자의 타입이나, 갯수가 달라서, 호출시 구분될수 있어야한다.

// 함수 오버로딩(overloading) 이라고 합니다.
//
int square(int a)			// square_int()
{
	return a * a;
}

double square(double a)		// square_double() C언어라면 이렇게 이름을 바꾸어야
{
	return a * a;
}

int main()
{
	square(3);
	square(3.4);
}
