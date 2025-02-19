#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// 단항함수(unary)  : 인자가 1개인 함수
// 이항함수(binary) : 인자가 2개인 함수
// 조건자(predicate) : bool 을 반환하는 함수

// std::find_if 의 3번째 인자는 "unary predicate"

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

	//==========================
	// C++11 부터는 알고리즘에 함수를 전달할때
	// "함수" 보다 "람다표현식"을 권장 합니다.

	// => 익명의 함수를 만드는 기술
	// => 함수이름이나 주소가 필요한 위치에
	// => "함수구현 자체를 전달" 하는 문법

	// [] : 람다표현식이 시작됨을 알리는 기호, lambda introducer 라고 합니다

	auto ret3 = std::find(v.begin(), v.end(), [](int n) { return n % 3 == 0; } );
}