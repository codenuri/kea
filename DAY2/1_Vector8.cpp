#include <iostream>

// ���� vector Ŭ���� ����ڴ� ����� �����ؼ� ����ϸ�˴ϴ�.
// �� ����� "main�Լ��� �ִ¼ҽ��� vector.cpp" �� ��� ���忡 ���ԵǾ�� �մϴ�

#include "vector.h"

int main()
{
	vector v(5, 0);
	v.at(0) = 10;

	v.resize(10);

	std::cout << v.at(0) << std::endl; // 10

	std::cout << v.size() << std::endl;

}