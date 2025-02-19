// 6_알고리즘1	199p ~
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// 컨테이너에서 3을 찾고 싶다.
	// 방법 1. 멤버함수 find를 제공하자.
	// 
	// 장점 : 사용하기 쉽고, 가독성도 좋다.
	// 단점 : 모든 컨테이너에 find 를 만들어야 한다.
	//        구현은 거의 동일한데, 각각의 컨테이너에 모두 구현
	s.find(3);
	v.find(3);
	

	// 방법 #2. 한개의 find 만 함수 템플릿으로 제공하자.
	
	
	// 장점 : 한개의 find 함수(템플릿) 으로 모든 컨테이너에서 선형검색된다.!!!
	// 단점 : 사용법이 어렵고, 복잡해 보인다.

	std::find(s.begin(), s.end(), 3);
	std::find(v.begin(), v.end(), 3);
	

	// C++ 진영은 "방법#2" 를 선택해서 설계됨.

	// find 같은 "멤버 함수가 아닌 C++ 표준함수(템플릿)" 을
	// "알고리즘(algorithm)" 이라고 부릅니다.

}

// C++ 표준 라이브러리(STL) 의 3대 요소
// Container : vector, list 와 같은 요소를 저장하는 클래스
// Iterator  : 컨테이너의 요소열거에 사용되는 포인터 역활의 객체
// Algorithm : std::find 같은 멤버가 아닌 일반 함수 템플릿