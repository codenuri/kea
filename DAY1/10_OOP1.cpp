// 3_OOP1 - 72page
#include <iostream>

// �簢���� ������ ���ϰ�, �簢���� �׸��� �Լ�
// => �ڵ尡 ������ ���δ�.

// ������ 
// => �簢�� Ÿ���� ��� int ���� 4���� ǥ���ϱ� ������
// => �簢�� Ÿ���� ������ �ڵ�� ������ ����.

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