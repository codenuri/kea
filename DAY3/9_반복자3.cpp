#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	
	// 1. past the end

	auto p1 = s.begin();	// 1��° ���(1)�� ����Ű�� �ݺ���
	auto p2 = s.end();		// ������ ��Ұ� �ƴ� ������ ���� ��Ҹ� ����Ű�� �ݺ���
							// "past the end" ��� �մϴ�
							// ���� * �����ϸ� �ȵ˴ϴ�.

	*p1 = 10;	// ok
//	*p2 = 10;	// runtime error

	// s.end()�� ��� �ݺ��ڴ�, == �� != ���길 ����ؾ� �մϴ�.
	// => ��, p1�� �̵��� ���� �����ߴ��� Ȯ���ϴ� �뵵
	while (p1 != p2)
	{
		std::cout << *p1 << std::endl;
		++p1;
	}
}