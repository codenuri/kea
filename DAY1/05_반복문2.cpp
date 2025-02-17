#include <iostream>

// range-for 문 사용시 모든 요소를 거꾸로 접근할수 없나요 ?
// => C++20 부터 가능합니다
// => range library
#include <ranges>
// 아래 코드를 컴파일하려면 
// 설정에서 C++20 지정해야 합니다.

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	


	// 아래 처럼 하면 x 배열을 거꾸로 바라보는 시각을 얻을수 있습니다.
//	auto rv = std::views::reverse(x); // x를 꺼꾸로 바라보는 시각
//	auto rv = std::views::take(x, 5); // x에서 5개만 꺼내는 시각
//	auto rv = std::views::stride(x, 2); // 2칸씩 이동하는 시각

	// 시각(뷰, view) 는 중첩도 됩니다.
	auto rv = std::views::stride(std::views::reverse(x), 2);

//	for (auto e : x)
	for (auto e : rv)
	{				

		std::cout << e << std::endl;
	}
}
