#include <iostream>

// ��κ��� �� "������ ������" �� ����������
// => �߿��ϰ� �ٷ����� �ʽ��ϴ�.

// C++ ���� "�߱� �̻��� ����� �����Ϸ��� �ݵ�� �˾ƾ� �մϴ�."
// => �ݵ�� �����ؾ� �ϴ� ����Դϴ�

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