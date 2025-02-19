#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// �����Լ�(unary)  : ���ڰ� 1���� �Լ�
// �����Լ�(binary) : ���ڰ� 2���� �Լ�
// ������(predicate) : bool �� ��ȯ�ϴ� �Լ�

// std::find_if �� 3��° ���ڴ� "unary predicate"

bool foo(int n) { return n % 3 == 0; }


int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	// �־��� �������� ó�� ������ "3" �� ã�ƶ�
	auto ret1 = std::find(v.begin(), v.end(), 3);



	// �־��� �������� ó�� ������ "3�ǹ��" �� ã�ƶ�
	
	// std::find    : ��   �˻�, 3��° ���ڰ� "��"
	// std::find_if : ���� �˻�, 3��° ���ڰ� "�Լ�(����������)"

	auto ret2 = std::find(v.begin(), v.end(), foo );

	std::cout << *ret2 << std::endl; // 9

	//==========================
	// C++11 ���ʹ� �˰��� �Լ��� �����Ҷ�
	// "�Լ�" ���� "����ǥ����"�� ���� �մϴ�.

	// => �͸��� �Լ��� ����� ���
	// => �Լ��̸��̳� �ּҰ� �ʿ��� ��ġ��
	// => "�Լ����� ��ü�� ����" �ϴ� ����

	// [] : ����ǥ������ ���۵��� �˸��� ��ȣ, lambda introducer ��� �մϴ�

	auto ret3 = std::find(v.begin(), v.end(), [](int n) { return n % 3 == 0; } );
}