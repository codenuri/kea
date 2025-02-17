// 04_함수1-1.cpp

// 디폴트 파라미터 주의 사항 #1.
// => 마지막 인자부터 차례대로만 지정 가능하다.
void f1(int a, int b,     int c = 0) {} // ok
void f2(int a, int b = 0, int c = 0) {} // ok

void f3(int a = 0, int b, int c = 0) {} // error

void f4(int a, int b = 0, int c) {} // error
//-------------------------------------------

// 주의 사항 2.
// => 함수를 선언과 구현으로 분리시는 선언에 표기
void f5(int a, int b, int c = 0);

void f5(int a, int b, int c = 0)
{

}

