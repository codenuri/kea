// C++ 함수 특징 3. inline   .. 36page


       int add1(int a, int b) { return a + b; }
inline int add2(int a, int b) { return a + b; }

// 인라인 함수
// => 호출코드 부분에 "함수의 구현" 자체를 치환해 달라.
// 장점 : 일반 함수 보다 빠르다.
// 단점 : 함수의 크기가 큰 경우, 여러번 치환되면 코드메모리 증가

int main()
{
	int n1 = add1(1, 2);  // 1. 2개의 인자를 약속된 장소(stack 또는 register)에 넣고
						  // 2. 함수로 이동(call add1 )

	int n2 = add2(1, 2);  // <= add2의 기계어 코드를 이 위치에 놓아 달라.
						  // mov eax, 1
						  // add eax, 2 
}
// 실제 인라인 결과 확인하려면
// 1. godbolt.org 에서
// 2. x64 msvc  컴파일러로 변경하고
// 3. -Ob1 옵션을 전달하려면 됩니다.

// inline 함수는 "최적화 옵션등이 있을때만" 인라인 치환됩니다.