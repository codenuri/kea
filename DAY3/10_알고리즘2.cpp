// 6_�˰���1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm> 

// #1. ��κ��� ǥ�� �˰����� <algorithm> �� �ֽ��ϴ�.

int main()
{
	std::vector<int> v = { 1,2,3,4,3,6,7,3,9,10 };

	// #2. ��κ��� �˰����� ���ڷ� "�ݺ���"�� �޴� ����� �ƴ� �Լ��Դϴ�.
	// ������ �˰����� std::reverse() �Դϴ�.
	
	std::reverse( v.begin(), v.end() ); // ok. �׷��� �� �ڵ�� 
	
//	v.reverse(); // �̷��� ����ϴ� �ͺ��� ������ ���Դϴ�.


	for (auto e : v)
		std::cout << e << ", ";
	std::cout << std::endl;

	// ���ǿ� �´� ��Ҹ� �ٸ������� �����ϴ� �˰����� std::replace() �Դϴ�.
	// v ���� 3�� -1�� ������ ������.  
	
	std::replace( v.begin(), v.end(), 3, -1 );

	for (auto e : v)
		std::cout << e << ", ";
	std::cout << std::endl;

	// 1,2,3,4,3,6,7,3,9,10 => 10, 9, -1, 7, 6, -1, 4, -1, 2, 1
}