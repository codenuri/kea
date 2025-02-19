// 6_알고리즘1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm> 

// #1. 대부분의 표준 알고리즘은 <algorithm> 에 있습니다.

int main()
{
	std::vector<int> v = { 1,2,3,4,3,6,7,3,9,10 };

	// #2. 대부분의 알고리즘은 인자로 "반복자"를 받는 멤버가 아닌 함수입니다.
	// 뒤집는 알고리즘은 std::reverse() 입니다.
	
	std::reverse( v.begin(), v.end() ); // ok. 그런데 이 코드는 
	
//	v.reverse(); // 이렇게 사용하는 것보다 복잡해 보입니다.


	for (auto e : v)
		std::cout << e << ", ";
	std::cout << std::endl;

	// 조건에 맞는 요소를 다른값으로 변경하는 알고리즘은 std::replace() 입니다.
	// v 에서 3을 -1로 변경해 보세요.  
	
	std::replace( v.begin(), v.end(), 3, -1 );

	for (auto e : v)
		std::cout << e << ", ";
	std::cout << std::endl;

	// 1,2,3,4,3,6,7,3,9,10 => 10, 9, -1, 7, 6, -1, 4, -1, 2, 1
}