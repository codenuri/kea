// github.com/codenuri/kea    DAY2.zip
#include <iostream>
#include <vector>

// C++ ��
// 1. Ÿ���� ����� Ŭ���� ������ �����ϰ�
// 2. class �������� �̸� ������� ���� Ÿ���� �����Ѵ�.
//    => STL �̶�� �մϴ�.
//    => Standard Template Library

int main()
{
	// �迭�� ������ ���Ŀ��� ũ�⸦ �����Ҽ� ����.
	int x[5] = { 1,2,3,4,5 };

	// C++ ǥ���� std::vector �� ������ �迭�� �����ϰ�
	// ũ�⸦ �����Ҽ� �ִ�.
	std::vector<int> v = { 1,2,3,4,5 };
	
	v[0] = 10;
	v.resize(10);
}





