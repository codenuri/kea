// 3_변수1
#include <iostream>

// C++ 은 C언어의 변수 관련 문법을 더욱 발전시켰습니다.
// 교재 22 page ~

struct Point 
{
	int x = 0; // #1. C++11 부터 구조체 멤버에 초기값 지정 가능합니다.
	int y = 0;
};

int main()
{
	// #2. 새로운 타입
	bool b = true;		// true, false 로 초기화, 1바이트 크기
	long long n = 0;	// 64비트 정수 타입, 8바이트 크기, C언어도지원
		
	// #3. digit separator, 2진수
	int n1 = 0b1;		// C++14 부터 2진수 표기법 가능.
	int n2 = 1'000'000; // 보기 좋은 코드를 위한 자릿수 표기법가능. C++11
	
	struct Point p1; // C언어는 구조체 변수 만들때 struct 필요
	Point p2;		 // C++언어는 struct 없어도 됨.
}
