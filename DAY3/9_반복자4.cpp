// 5_�ݺ���1
#include <iostream>
#include <vector>
#include <list>

int main()
{
//	std::list<int>   c = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };

	// �����̳� ��� ��� �����ϴ� ���
	// 1. range - for ��, ��� �����̳� ����, C++11 ����
	// => ���� ���� ���. ����
	// => ��� �����̳ʿ� �迭 ����

	for (auto e : c)
	{
		// e ���
	}

	// 2. �ݺ��� ���, ��� �����̳� ��밡��
	// => ��� �����̳ʿ��� �ݺ��ڰ� �ִ�.
	// => ���ɵ� ���� ����(�� �ڵ尡 ���������� �̷��� ����)
	auto p1 = c.begin();
	auto p2 = c.end();

	while (p1 != p2)
	{
		auto e = *p1;
		++p1;
	}

	// 3. [] ������ ��� - vector, deque�� ����, list �ȵ�

	for (int i = 0; i < c.size(); i++)
	{
		auto e = c[0]; // c �� list ��� ����.
	}
}

