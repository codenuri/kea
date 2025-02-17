#include <iostream>

struct Point
{
	int x, y;
};
int main()
{
	// 24page - 중요한 변화.!
	int n1    = 10;
	int x1[3] = { 1,2,3 };
	Point p1  = { 1,2 };

	// C 와 C++98 시절의 초기화의 문제점
	// => 변수의 종류에 따라 초기화 방법이 다르다. 
	// => 모두 동일한 방법으로 초기화 할수 없을까 ?

	// C++11 의 "uniform initialization(일관된 초기화)" 문법
	// => 모든 종류의 변수를 {}로 초기화 할수 있다
	// => 흔히 "중괄호 초기화(brace-init)" 이라는 별명으로 불리는 문법
	int n2    = { 10 };
	int x2[3] = { 1,2,3 };
	Point p2  = { 1,2 };

	// = 이 없어도 됩니다.
	int n3 { 10 };
	int x3[3] { 1,2,3 };
	Point p3 { 1,2 };

	// direct initialization : = 이 없는 초기화
	// copy   initialization : = 이 있는 초기화
	// => class 타입에서는 약간의 차이가 있는데
	// => 기본 타입에서는 동일. 
}



