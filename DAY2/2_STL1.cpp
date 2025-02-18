#include <iostream>
#include <vector>

// 이전 예제에서 vector 를 만들어 보았지만
// 사실 이미 C++ 표준에서 제공하고 있습니다

int main()
{
	std::vector<int> v1(10, 3);	// 10 개를 3으로 초기화

	std::vector<int> v2 = { 1,2,3,4,5 };	// 배열처럼 초기화도 가능

	v1.at(0) = 10;  // 이렇게 해도 되고
	v1[0] = 10;     // 이렇게 해도 됩니다. 일반적인 사용관례

	// 다양한 멤버 함수가 있으므로 편리하게 사용하면 됩니다.
	v1.push_back(9);

	std::cout << v1.size() << std::endl; // 11

	v1.resize(20);
	std::cout << v1.size() << std::endl; // 20
	
	// 자세한 주요 사용법은 3일차 오후에.. 
}
