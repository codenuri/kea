#include <cstdio>		// printf
#include <iostream>		// std::cout, std::cin 을 위한 헤더. 

// 13 page

int main()
{
	int n = 10;

	// C style 입출력
	printf("n = %d\n", n); // C style
//	scanf("%d", &n);	   // 입력
	scanf_s("%d", &n);	   // 입력


	// C++ style
	// 특징 #1. 포맷지시어("%d, %f"등) 를 사용할필요 없다. 변수이름만 표기
	// 특징 #2. << 을 연속적으로 사용가능.
	// 특징 #3. 개행은 '\n' 로해도 되고, std::endl 로 해도 된다.
	//          std::endl 은 느립니다. 그래서 권장은 '\n' 입니다.
	//			std::endl 은 함수 이고, 함수 포인터를 전달하는 복잡한 원리

	std::cout << "n = " << n << std::endl; // 위 prinf 코드 와 같은 기능

	// 표준 입력
	// 특징 : &n 이 아닌 n 입니다.
	// 주의 : << 와 >> 잘 구별하세요
	std::cin >> n;

	// printf, scanf      : 정체가 함수 입니다. 그래서 사용시 () 연산자로 호출
	// std::cout, std::cin : 객체라는 개념. 객체지향 문법을 알아야 이해 가능
	//						지금은 사용법만. 
}
