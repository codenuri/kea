#include <iostream>

// range-for �� ���� ��� ��Ҹ� �Ųٷ� �����Ҽ� ������ ?
// => C++20 ���� �����մϴ�
// => range library
#include <ranges>
// �Ʒ� �ڵ带 �������Ϸ��� 
// �������� C++20 �����ؾ� �մϴ�.

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	


	// �Ʒ� ó�� �ϸ� x �迭�� �Ųٷ� �ٶ󺸴� �ð��� ������ �ֽ��ϴ�.
//	auto rv = std::views::reverse(x); // x�� ���ٷ� �ٶ󺸴� �ð�
//	auto rv = std::views::take(x, 5); // x���� 5���� ������ �ð�
//	auto rv = std::views::stride(x, 2); // 2ĭ�� �̵��ϴ� �ð�

	// �ð�(��, view) �� ��ø�� �˴ϴ�.
	auto rv = std::views::stride(std::views::reverse(x), 2);

//	for (auto e : x)
	for (auto e : rv)
	{				

		std::cout << e << std::endl;
	}
}
