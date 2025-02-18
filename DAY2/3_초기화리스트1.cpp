// 6_초기화리스트1    89page ~
#include <iostream>

class Point
{
	int x, y;
public:
	// 생성자에서 멤버 데이타를 초기화 하는 2가지 방법
	// #1. 멤버 초기화 리스트 - 좋은 코드
	// #2. {} 안에서 대입 - 나쁜 코드 
	Point(int a, int b) : x(a), y(b)	// #1. 생성자 ()뒤에 : 을 적고 초기화
	{									//	   멤버 초기화 리스트라고 합니다.

		x = a;	// #2. 생성자 {} 안에서 = 연산자 사용
		y = b;
	}
};



int main()
{
	Point pt(0, 0);
}




