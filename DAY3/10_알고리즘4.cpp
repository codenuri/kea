// 6_�˰���1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };
		
	// �־��� �������� 3�� -1�� ����
	std::replace(v.begin(), v.end(), 3, -1);
	 

	// v���� "¦��"�� 0���� ������ ������ 
	// => ����ǥ������ ����ؼ� �غ�����



	for (auto e : v)
		std::cout << e << ", ";
}