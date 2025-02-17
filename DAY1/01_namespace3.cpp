// 1_namespace3.cpp - 9page 내용
// 
#include <algorithm>

// #1. C++의 모든 표준은 std 라는 namespace 안에 있습니다.
// #2. 초급 시절에 "std" 를 붙이는 것이 싫어서 아래 처럼 하곤합니다.
//using namespace std; // 코드 전체에서 std:: 없이 표준함수 사용가능
					 // 그런데, 되도록 사용하지 마세요

int count = 0;

int main()
{
	int n = std::min(3, 2); // C++ 표준 함수. algorithm 헤더 필요

	count = 10; // error.. 왜 ??? 에러일까요 ?
				// 내가 만든 전역변수인데 ??? 
				
				// C++ 표준에 std::count() 라는 표준함수가 있습니다
				// "using namespace std" 때문에
				// 전역변수 count 와 표준함수 count 의 이름 충돌 발생
}
