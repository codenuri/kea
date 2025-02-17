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
// 정체
// 헤더파일
// 해지방법
// 인자
// 반환타입
// 결정적차이

