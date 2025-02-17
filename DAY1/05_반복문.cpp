// 44page~
#include <iostream>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// traditional for statement
	for (int i = 0; i < 10; i++)
		std::cout << x[i] << std::endl;

	// C++11 에서 도입된 새로운 for 문
	// => range-based for
	for (auto e : x) // x는 배열뿐 아니라 vector,list 등 C++표준라이브러리
	{				// 도 가능

		std::cout << e << std::endl;
	}
}
