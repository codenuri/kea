// 2_메모리할당 - 47 page
#include <iostream>

// 동적 메모리 할당의 필요성

int main()
{
	// 사용자에게 입력받은 학생수 만큼의 점수를 다시 입력받고 싶다.
	int cnt = 0;
	std::cin >> cnt;  // 학생수 입력 받기


	// 배열의 크기로 변수 사용하기 ?
	// => VLA(Variable Length Array)
	// => C, C++이 다르고, C 도 버전에 따라 다릅니다
	
	// C언어 상황
	// C99 이전(1999년) : VLA 지원 안됨. 배열의 크기로 변수 사용 못함
	// C99 이후         : VLA 지원
	// C11 이후(2011년) : VLA 는 필수가 아님. 컴파일러에 따라 지원 안될수 있음.

	// C++ 상황
	// 표준 문법 : VLA 지원 안함. 배열의 크기는 반드시 컴파일 시간에  알아야 한다.
	// g++, clang++ : 컴파일러의 확장 기능으로 VLA 지원

	int score[cnt]; // g++, clang++ 은 에러 아님.
					// visual studio(cl컴파일러) - error. 
}

