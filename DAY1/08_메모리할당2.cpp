#include <iostream>

int main()
{
	int cnt = 0;

//	int score[cnt]; // 컴파일러에 따라 다를수 있는 코드

	// 위 문제의 해결책은 2가지 방법이 있습니다.
	
	// #1. 충분히 큰 크기의 배열 사용. 임베디드 환경에서 주로 사용
	int score[100];


	// #2. 동적 메모리 할당
	int* score = (int*)malloc(sizeof(int) * cnt);
	free(score);

	// #3. C++ 에서는 malloc 대신 new 권장
	int* p1 = new int;
	delete p1;

	int* p2 = new int[cnt];	// 배열로 할당, 변수도 가능
	delete[] p2;			// 주의 배열 할당은 delete 가 아닌 delete[] 사용
}

//					malloc					new
// 정체				함수						연산자(컴파일러가 인식하는 키워드)
// 헤더파일			<stdlib.h>				헤더 필요 없음.

// 해지방법			free					delete 또는 delete[]
//											배열로 할당한 경우 반드시 delete[]						

// 인자				필요한 메모리 크기(숫자)	크기가 아닌 타입 전달

// 반환타입			void*					인자로 전달된 타입의 * 로 반환
//					대부분의 경우 다른타입*	캐스팅 필요없음.
//					로 변환해서 사용

// 결정적차이		생성자 호출안됨			생성자 호출됨.

