// 5_반복자1
#include <iostream>
#include <vector>
#include <list>

int main()
{
//	std::list<int>   c = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };

	// 컨테이너 모든 요소 열거하는 방법
	// 1. range - for 문, 모든 컨테이너 가능, C++11 부터
	// => 가장 좋은 방법. 권장
	// => 모든 컨테이너와 배열 가능

	for (auto e : c)
	{
		// e 사용
	}

	// 2. 반복자 사용, 모든 컨테이너 사용가능
	// => 모든 컨테이너에는 반복자가 있다.
	// => 성능도 위와 동일(위 코드가 내부적으로 이렇게 동작)
	auto p1 = c.begin();
	auto p2 = c.end();

	while (p1 != p2)
	{
		auto e = *p1;
		++p1;
	}

	// 3. [] 연산자 사용 - vector, deque만 가능, list 안됨

	for (int i = 0; i < c.size(); i++)
	{
		auto e = c[0]; // c 가 list 라면 에러.
	}
}

