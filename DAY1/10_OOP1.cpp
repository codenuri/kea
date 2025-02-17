// 3_OOP1 - 72page
#include <iostream>

// 사각형의 면적을 구하고, 사각형을 그리는 함수
// => 코드가 복잡해 보인다.

// 원인은 
// => 사각형 타입이 없어서 int 변수 4개로 표현하기 때문에
// => 사각형 타입이 있으면 코드는 간결해 진다.

int getRectArea(int left, int top, int right, int bottom)
{
	return (right - left) * (bottom - top);
}

void drawRect(int left, int top, int right, int bottom)
{
	std::cout << "draw rect" << std::endl;
}

int main()
{
	int n1 = getRectArea(1, 1, 10, 10);
	drawRect(1, 1, 10, 10);
}