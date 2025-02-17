#include <iostream>

// Swap를 만들어 봅시다.
// 1. C 버전
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

// 2. C++ 버전
// #1. pointer 대신 reference 사용 - 가독성이 좋고, 안전해 진다.
// #2. 다양한 타입에대해서 동작하기 위해, 함수가 아닌 함수의 틀(template)으로 !!
// #3. 성능향상을 위해서 inline 치환
// #4. 이름 충돌을 막기위해 namespace 도입
// #5. 아래 swap 은 이미 C++표준에 있습니다.

// C++ 표준 라이브러리 이름 => STL
// => Standard Template Library

namespace Utils
{
	template<typename T>
	inline void Swap(T& a, T& b)
	{
		T tmp = a;
		a = b;
		b = tmp;
	}
}


int main()
{
	int x = 3, y = 2;
//	Swap(&x, &y);
	Utils::Swap(x, y);

	std::swap(x, y); // C++ 표준의 swap. 
					 // <algorithm> 헤더에 있습니다.

	std::cout << x << std::endl;
	std::cout << y << std::endl;
}



