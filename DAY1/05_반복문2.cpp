#include <iostream>

// range-for 문 사용시 모든 요소를 거꾸로 접근할수 없나요 ?
// => C++20 부터 가능합니다
// => range library
#include <ranges>


int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	
	// 아래 처럼 하면 x 배열을 거꾸로 바라보는 시각을 얻을수 있습니다.
	auto rv = std::views::reverse(x);

	for (auto e : x)
	{				

		std::cout << e << std::endl;
	}
}
