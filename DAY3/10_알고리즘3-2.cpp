#include <iostream>
#include <vector>
#include <list>
#include <algorithm>


bool foo(int n) { return n % 3 == 0; }

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };



	int k = 3; // ����ڰ� �Է��� ���̶�� �����մϴ�.

	// �־��� �������� "����ڰ� �Է��� k" �� ����� ã�� �ʹ�.


	auto ret1 = std::find(v.begin(), v.end(), foo);

	auto ret2 = std::find(v.begin(), v.end(), [](int n) { return n % 3 == 0; });
}