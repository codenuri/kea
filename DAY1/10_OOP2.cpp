
#include <iostream>

// ��ü���� ���α׷����� �ٽ� #1.
// => �ʿ��� Ÿ���� ���� ���� �Ѵ�

// C ����� ����ü ���� ���
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