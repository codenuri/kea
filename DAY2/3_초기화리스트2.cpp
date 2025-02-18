#include <string>

// 1. 초기화와 대입을 알아 두세요

int main()
{
	int a = 10;	// 초기화(initialization) 입니다.
				// 선언과 동시에 값을 넣는 것

	int b;		// 
	b = 10;		// 초기화가 아닌 대입(assignment)입니다
				// 변수를 선언후에 값을 넣은 것

	// primitive 타입인경우
	// => 대부분의 컴파일러가 동일한 기계어 코드 생성

	//-------------------------
	// 사용자 정의 타입인 경우
	std::string s1 = "hello";	// 초기화. 생성자만 한번 호출해서 초기화 된것
								// string(const char*) 생성자 1회 호출

	std::string s2;	// 1. string 의 디폴트 생성자 호출
	s2 = "hello";	// 2. s.operator=(const char*) 라는 대입연산자 함수 호출
					// => 2회의 함수 호출로 "hello" 를 s2에 넣은것

	//-----------------------------
	// primitive 타입이라도 상수나 레퍼런스는 초기화만 가능합니다.
	const int c1 = 10;
	const int c2;
	c2 = 10;

	int& r1 = a;
	int& r2;
	r2 = a;


}