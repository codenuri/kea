// 4_STL_�����̳�1.cpp
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	v.resize(3); // ��� ���������� ?		
				 // �ٽ� : ũ�Ⱑ �پ�鶧 �Դϴ�.

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 3, 5


	v.push_back(0); // ���� �Ѱ� �߰�
					// ���� ���´� capacity > size �̹Ƿ�
					// �� ������ ������ �����մϴ�.

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 4, 5


	// ������ �޸𸮸� ������ �޶�.
	v.shrink_to_fit(); // ������ 4��ũ�� �޸𸮸� ���Ҵ��ϴ� ��

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 4, 4


	v.push_back(0); // ���� �Ѱ� �߰�
					// ���� ���´� size == capacity
					// ����(�޸�) ���Ҵ� �ʿ�
					// �̼����� push_back �� ���(expensive) ����
					
					// ��ŭ ���� �ұ� ?
					// 
					// g++ : new_capacity = ����_capacity * 2
					// cl  : new_capacity = ����_capacity * 1.5

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 4, 6
}











