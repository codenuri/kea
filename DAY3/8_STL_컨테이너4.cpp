// 5_STL_컨테이너4
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	std::list<int>   s = { 1,2,3,4,5 };

	// 1. 제거와 반환을 동시에 하는 멤버 함수는 없습니다.
	// => 가장 안전한 컨테이너를 설계하려면 제거/반환을 동시에 할수 없다는
	//     이론이 있습니다. 
	// => "예외 안전성의 강력보장(exception safety)" 를 찾아 보세요

	int n = v.back(); // 끝에서 하나 얻기.. 제거는 안됨.
	v.pop_back();     // 제거만, 반환값은 void

	std::cout << n << std::endl;




	// 2. 컨테이너가 컨테이너를 보관하면 아주 좋은 "자료구조"를 만들수 있습니다.
	// "자료구조(data structure)" : 데이타를 어떻게 보관할 것인가 ? 를 다루는 분야

	std::vector< std::list<int> > v2(10);

	v2[0].push_back(1);
	v2[0].push_back(2);
	v2[0].push_back(3);

	v2[1].push_back(10);
	v2[1].push_back(20);
}

// 컨테이너(Container ) : 여러개의 요소를 보관하는 클래스
//						list, vector, deque 등
//						다른 언어에서는 collection 이라고도 합니다.