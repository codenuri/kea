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
							// => �� ������� �ϸ� �Ϲ��Լ� foo ���� 
							//    main �� �������� k�� ����Ҽ� �����ϴ�.


	// ����ǥ���Ŀ����� main �� ���������� ���� �����մϴ�.
	// => �������� ĸ�� ��� ���
	// => ���� ǥ���ľȿ��� �ڽ��� outer function(main) �� �������� �� �����ϴ� �ɷ�
	auto ret2 = std::find(v.begin(), v.end(), [k](int n) { return n % k == 0; });


}