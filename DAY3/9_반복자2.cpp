// 5_반복자1
#include <iostream>
#include <vector>
#include <list>

int main()
{
//	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };

	// 반복자(iterator)란 ?
	// => 컨테이너의 요소를 가리키는 포인터 역활의 객체
	// => 연산자 재정의 기술로 만들어진 타입(클래스)

//	auto p1 = s.begin(); // p1은 진짜 포인터가 아니고 
						 // 객체 입니다
//	++p1;	// p1.operator++() 함수 호출되고
			// 함수 안에서 다음 요소를 가리키도록 코드가 만들어진것


	// ------------------------------------------
//	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };


	// 1. 반복자의 정확한 타입
	// => "컨테이너이름<타입>::iterator" 입니다. iterator 는 using alias 입니다
	// => 그런데, 아래 처럼 직접 사용하지 마세요. auto 사용하세요.
	// => 이름을 아래처럼 사용하면 컨테이너 변경시, 아래 코드 변경됩니다.
//	std::list<int>::iterator p1 = s.begin();

	auto p1 = s.begin();
	
}



/*
namespace std
{
	template<typename T>
	class list_iterator
	{
		// linked list 의 요소를 가리키면서 포인터 처럼 동작하게 만든 타입
		// operator++(), operator*()

		// 반복자의 이름은 사용자가 외울 필요 없이 하자.!!!
		// => 그래서 이 클래스 이름은 컴파일러마다 다릅니다.
	};

	template<typename T>
	class list
	{
	public:
		// 컨테이너 설계자가 "약속된 별명"으로 자신의 반복자 타입을 노출.. 
		using iterator = list_iterator<T>;
	};

}*/