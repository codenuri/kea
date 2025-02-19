// 5_반복자1		191p ~
#include <iostream>
#include <vector>
#include <list>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// 배열의 시작 주소를 알면 모든 요소를 열거할수 있습니다
	int* p1 = x;


	// list 는 모든 요소가 떨어져 있으므로
	// 1번째 요소의 주소를 알아도 ++ 로 이동할수는 없습니다.
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };


	// 그런데, 반복자(iterator) 라는 것을 꺼내면 ++로 모든 요소 접근 가능합니다

	auto p2 = s.begin();

	// p2는 list의 1번째 요소를 가리키는 반복자(iterator)를 꺼낸것
	++p2;
	++p2;

	std::cout << *p2 << std::endl; // 3


}