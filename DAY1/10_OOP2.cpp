
#include <iostream>

// 객체지향 프로그래밍의 핵심 #1.
// => 필요한 타입을 먼저 설계 한다

// C 언어의 구조체 문법 사용
struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};

int getRectArea(const Rect& rc)
{
	return (rc.right - rc.left) * (rc.bottom - rc.top);
}

void drawRect(const Rect& rc)
{
	std::cout << "draw rect" << std::endl;
}

int main()
{
	Rect r = { 1,1,10,10 };

	int n1 = getRectArea(r);
	drawRect(r);


//	int n1 = getRectArea(1, 1, 10, 10);
//	drawRect(1, 1, 10, 10);
}