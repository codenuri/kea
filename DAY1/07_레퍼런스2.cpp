// 1_레퍼런스2
#include <iostream>

// reference 는 언제 사용하나요 ?
// => 함수 인자로 널리 사용됩니다.

void inc1(int n)  { ++n; }
void inc2(int* p) { ++(*p); }
void inc3(int& r) { ++r; }

int main()
{
	int a = 1, b = 1, c = 1;

	// a, b, c를 함수로 전달해서 1증가하고 싶다
	inc1(a);  // call by value. a증가안됨. 실패

	inc2(&b); // call by pointer. b증가됨. 성공
	
	inc3(c);  // call by reference. c증가됨. 성공 
	// int& r = c;

	std::cout << a << std::endl; // 1
	std::cout << b << std::endl; // 2
	std::cout << c << std::endl; // 2
}

// 함수 인자로 reference를 사용하면 
// 포인터를 사용하는 것과 유사한 특징이 있습니다.
// => 모두 원본 데이타 수정 가능
// 
// 그런데, 레퍼런스가
// 1. 코드가 간결하고 가독성 좋음
// 2. 안전합니다(safety)

void f1(int* p)
{
	if (p != 0) // 안전하게 하려면 이렇게 확인 해야 합니다
	{
		*p = 10;
	}
}
f1(0); // 인자가 포인터 인 경우 0 전달이 가능합니다.


void f2(int& r)
{
	r = 10;	// 함수안에서 r이 null 인지 확인하는 코드 필요 없습니다.
}
f2(0);	// error. 인자가 reference 라면 0을 보낼수 없습니다.
		// 반드시 유효한 변수를 보내야 합니다

// 그래서, reference 를
// "안전하고, 자동 dereferencing(*) 되는 포인터" 라고도 합니다.