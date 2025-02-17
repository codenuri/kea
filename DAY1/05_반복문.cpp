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
	for (int e : x)
	{
		std::cout << e << std::endl;
	}
}
