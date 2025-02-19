#include <iostream>

// 대부분의 언어가 "연산자 재정의" 를 지원하지만
// => 중요하게 다루지는 않습니다.

// C++ 언어는 "중급 이상의 기술을 이해하려면 반드시 알아야 합니다."
// => 반드시 공부해야 하는 기술입니다

class plus
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};

int main()
{
	plus p;
	int n1 = p(1, 2);

}