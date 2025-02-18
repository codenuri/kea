#include <iostream>

// 이제 vector 클래스 사용자는 헤더만 포함해서 사용하면됩니다.
// 단 빌드는 "main함수가 있는소스와 vector.cpp" 가 모두 빌드에 포함되어야 합니다

#include "vector.h"

int main()
{
	vector v(5, 0);
	v.at(0) = 10;

	v.resize(10);

	std::cout << v.at(0) << std::endl; // 10

	std::cout << v.size() << std::endl;

}