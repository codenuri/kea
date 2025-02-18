// 1. github.com/codenuri/kea  에서  DAY2.zip 받으시면 됩니다.
// 2. 압축 풀고 visual studio 에서 open 하세요
// 3. 0_reference_return.cpp   추가해 보세요

int x = 3;

// 아래 2개의 함수를 생각해 봅시다.
int  f1() { return x; }	// x 가 아닌 x의 값 "3" 을 반환하는 코드
int& f2() { return x; } // x 의 값이 아닌 x의 별명을 반환하는 코드

int main()
{
	f1() = 10;	// error.  "3 = 10" 의 의미 이므로 
	f2() = 10;  // ok      "x별명 = 10", 즉, 10은 전역변수 x 에 대입!
}

// 핵심
// => 함수가 reference 타입으로 반환 하면
// => 함수 호출을 등호의 왼쪽에 놓을수 있습니다.
// => 왜? 함수 호출을 등호에 왼쪽에 놓나요 ?
//    "vector 예제 참고"
//    C++ 에서 아주 널리 사용됩니다.