#include <iostream>
#include <vector>
#include <list>
#include <algorithm>


bool foo(int n) { return n % 3 == 0; }

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };



	int k = 3; // 사용자가 입력한 값이라고 가정합니다.

	// 주어진 구간에서 "사용자가 입력한 k" 의 배수를 찾고 싶다.


	auto ret1 = std::find(v.begin(), v.end(), foo);

	auto ret2 = std::find(v.begin(), v.end(), [](int n) { return n % 3 == 0; });
}