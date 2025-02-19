// 4_STL_컨테이너1.cpp
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	v.resize(3); // 어떻게 만들었을까요 ?		
				 // 핵심 : 크기가 줄어들때 입니다.

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 3, 5


	v.push_back(0); // 끝에 한개 추가
					// 현재 상태는 capacity > size 이므로
					// 이 연산은 빠르게 동작합니다.

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 4, 5


	// 여유분 메모리를 제거해 달라.
	v.shrink_to_fit(); // 원리는 4개크기 메모리를 재할당하는 것

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 4, 4


	v.push_back(0); // 끝에 한개 추가
					// 현재 상태는 size == capacity
					// 버퍼(메모리) 재할당 필요
					// 이순간의 push_back 은 비싼(expensive) 연산
					
					// 얼마큼 증가 할까 ?
					// 
					// g++ : new_capacity = 기존_capacity * 2
					// cl  : new_capacity = 기존_capacity * 1.5

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 5, 6


	v.clear();	// size 만 0으로 할까요 ?  ==> 0
				// 버퍼(메모리) 자체도 제거할까요 ?

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 0, 6

	// 메모리 자체를 제거하는 방법은 shrink_to_fit() 밖에 없습니다
	v.shrink_to_fit(); // capacity 를 size 로 하라는 의미 인데, size == 0 이므로
						// 메모리 제거

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 0, 0
}

// 파이썬의 list 등도 위와 유사하게 동작합니다.
// s = [1,2,3,4]
// s.append(0)   // 실제 메모리는 5개로 늘어나지 않고, 8개가 됩니다.









