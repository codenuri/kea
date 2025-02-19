#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	
	// 1. past the end

	auto p1 = s.begin();	// 1번째 요소(1)을 가리키는 반복자
	auto p2 = s.end();		// 마지막 요소가 아닌 마지막 다음 요소를 가리키는 반복자
							// "past the end" 라고 합니다
							// 절대 * 연산하면 안됩니다.

	*p1 = 10;	// ok
//	*p2 = 10;	// runtime error

	// s.end()로 얻는 반복자는, == 와 != 연산만 사용해야 합니다.
	// => 즉, p1을 이동시 끝에 도달했는지 확인하는 용도
	while (p1 != p2)
	{
		std::cout << *p1 << std::endl;
		++p1;
	}
}