// 3_입출력2.cpp - 18 page
#include <iostream>

// io manipulator
// => std::cout, std::cin 사용시 입출력 서식을 지정하는 도구
// => 대부분 <iomanip> 헤더 있습니다

#include <iomanip>

int main()
{
	int n = 10;
	std::cout << n << std::endl; // 10 

	std::cout << std::hex << n << std::endl; // a, 즉 16진수로 출력
	std::cout << std::dec << n << std::endl; // 10, 10진수

	std::cout << std::setw(10) << n << std::endl; // 

	std::cout << std::setw(10) << std::setfill('#') << n << std::endl; // 
}
