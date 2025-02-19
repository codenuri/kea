// 6_알고리즘1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	// 주어진 구간에서 처음 나오는 "3" 을 찾아라
	
	// std::find : [first, last) 사이의 선형검색 수행, first 는 검색 대상아님
	// 반환값 
	// 검색 성공시 : 요소를 가리키는 반복자
	// 검색 실패시 : last 

	auto ret1 = std::find(v.begin(), v.end(), 3); 

	if (ret1 == v.end())
	{
		// 검색 실패
	}
	else
	{
		// ret1은 요소를 가리키는 반복자 이므로 포인터 처럼 사용하면 됩니다.
		std::cout << *ret1 << std::endl;
	}
}