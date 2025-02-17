#include <iostream>

// C++은 4개의 캐스팅 연산자를 제공합니다.


// static_cast : 일반적인 경우에 사용하는 캐스팅
//		논리적으로 맞고 위험하지 않은 경우만 허용
//      void*=> 다른 타입*,
//		상속관계의 캐스팅 등.
//      반드시 연관성이 있어야 한다
//      표준 타입끼리의 값 변환 (3.4 => int 로)

// 위 작업 외에는 위험한 변환이다. 전용캐스팅 사용
// reinterpret_cast, const_cast 

int main()
{
	double d = 3.4;
//	int    n = d; // 에러는 아니지만 경고가 나올수 있습니다.
	int    n = static_cast<int>(d); // ok. 명시적 변환 했으므로
									//     경고도 없음.

	// void* => 다른타입*
	int* p1 = (int*)malloc(100);				// C 스타일 캐스팅
	int* p2 = static_cast<int*>(malloc(100));	// C++ 스타일 캐스팅 


	// void* 가 아닌 다른 타입끼리의 주소 변환
//	double* p3 = static_cast<double*>(&n); // error


}

