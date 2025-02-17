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


	double d = 12.123456789;

	// std::cout 의 실수 출력 : 정수부와 실수부를 합해서 6자리까지만 출력
	std::cout << d << std::endl;	// 12.1235

	// 실수출력의 정밀도를 높이 려면 해당하는 "iomanipator" 를 사용해야 합니다.
	// 1. cppreference.com 에서
	// 2. std::setw() 검색 => 오른쪽 상단 검색 창
	// 3. 상위 문서로 이동후
	// 4. 표에서 정밀도를 높이는 iomanipator 검색

	
	std::cout << std::setprecision(12) << d << std::endl;

}

// 늦게 접속하신분은 
// github.com/codenuri/kea 에서 DAY1.zip 받으시면 됩니다.

// 그런데, 입출력을 많이 하게 되면
// std::cout 이 printf 보다 많이 느립니다. 
// 그래서, 실전에서는 printf 사용하는 분들도 많이 있습니다.

// 그런데, C++23 에서 새로운 출력도 나옵니다. "std::println"