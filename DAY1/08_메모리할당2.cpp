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
}

