// 10 page 내용입니다.

//#include <stdio.h>  // C언어 시절의 헤더
#include <cstdio>     // C++언어에서 다시 만든 헤더.


// C++ : C언어의 대부분의 요소를 포함한다
// printf : C 언어 표준이기도 하지만 C++ 의 표준이기도 합니다.


// C++언어는 C 언어 헤더를 계속 사용해도 되지만
// C++ 이 C언어의 모든 헤더를 다시 만들었습니다.

// C 헤더				C++이 다시만든 헤더
// <xxx.h>		==>		<cxxx>
// <stdio.h>	==>		<cstdio>
// <stdlib.h>	==>		<cstdlib>
// <math.h>		==>		<cmath>

// 모든요소가			모든요소가 global 에도 있고
// global 에만			std:: 안에도 있다.

int main()
{
	printf("hello\n"); // ok

	std::printf("hello\n"); // ??
}
