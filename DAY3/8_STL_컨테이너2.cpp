// 4_STL_�����̳�1.cpp
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	v.resize(3); // ��� ���������� ?		
				 // �ٽ� : ũ�Ⱑ �پ�鶧 �Դϴ�.

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 3, 5

}