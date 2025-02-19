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
	plus p;	// p는 함수가 아닌 객체 입니다. plus 타입의 객체

	int n1 = p(1, 2);	// 객체인 p를 함수 처럼 사용합니다.
	int n2 = p.operator()(1, 2); // 위 코드는 아래 처럼 해석 됩니다.

	// a + b : a.operator+(b)
	// a - b : a.operator-(b)
	// a()   : a.operator()()
	// a(1,2): a.operator()(1, 2)
}

// 위 처럼 operator() 를 만들어서 
// 함수 처럼 사용가능한 객체를 함수 객체 라고 합니다.
// => 특정 상황에서 일반 함수 보다 빠르고
// => 장점이 너무 많습니다.

// C++20 에서 추가되는 모든 표준 함수는 
// => 함수가 아닌 함수객체 입니다.