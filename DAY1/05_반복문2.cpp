#include <iostream>

// range-for �� ���� ��� ��Ҹ� �Ųٷ� �����Ҽ� ������ ?
// => C++20 ���� �����մϴ�
// => range library
#include <ranges>


int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	
	// �Ʒ� ó�� �ϸ� x �迭�� �Ųٷ� �ٶ󺸴� �ð��� ������ �ֽ��ϴ�.
	auto rv = std::views::reverse(x);

	for (auto e : x)
	{				

		std::cout << e << std::endl;
	}
}
