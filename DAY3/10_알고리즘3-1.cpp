#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// 단항함수 : 인자가 1개인 함수
// 이항함수 : 인자가 2개인 함수

// 조건자(predicate) : bool 을 반환하는 함수

// std::find_if 의 3번째 인자는 "unary predicator"

bool foo(int n) { return n % 3 == 0; }


int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	// 주어진 구간에서 처음 나오는 "3" 을 찾아라
	auto ret1 = std::find(v.begin(), v.end(), 3);



	// 주어진 구간에서 처음 나오는 "3의배수" 을 찾아라
	
	// std::find    : 값   검색, 3번째 인자가 "값"
	// std::find_if : 조건 검색, 3번째 인자가 "함수(단항조건자)"

	auto ret2 = std::find(v.begin(), v.end(), foo );

	std::cout << *ret2 << std::endl; // 9
}