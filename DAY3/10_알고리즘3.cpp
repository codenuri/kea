// 6_�˰���1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	// �־��� �������� ó�� ������ "3" �� ã�ƶ�
	
	// std::find : [first, last) ������ �����˻� ����, first �� �˻� ���ƴ�
	// ��ȯ�� 
	// �˻� ������ : ��Ҹ� ����Ű�� �ݺ���
	// �˻� ���н� : last 

	auto ret1 = std::find(v.begin(), v.end(), 3); 

	if (ret1 == v.end())
	{
		// �˻� ����
	}
	else
	{
		// ret1�� ��Ҹ� ����Ű�� �ݺ��� �̹Ƿ� ������ ó�� ����ϸ� �˴ϴ�.
		std::cout << *ret1 << std::endl;
	}
}