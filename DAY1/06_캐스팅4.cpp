// const_cast : 

int main()
{
	const int c = 10;

//	int* p1 = &c;       // error. 상수의 주소는 
						// non-const 포인터 변수에 담을수는 없다.

	int* p2 = (int*)&c; // ok. C 스타일이 강제 캐스팅은 대부분 허용. 막강한 능력

//	*p2 = 20;	// 컴파일 에러는 아니지만 
				// 실제, c가 변경될지는 알수 없다(undefined)

	// C++ 스타일 캐스팅
//	int* p3 = static_cast<int*>(&c); // error.
//	int* p4 = reinterpret_cast<int*>(&c); // error.
	int* p5 = const_cast<int*>(&c); // ok.
									// 동일 타입의 상수성 제거를 위한 캐스팅

	// 단, 위처럼 캐스팅했어도 
	// *p5 = 10; // 같은 코드는 사용하지 마세요
}

// 결론, C++ 코드를 작성하다가 캐스팅이 필요 하면
// 1. C 스타일 () 캐스팅은 사용하지 마세요
// 2. 항상 static_cast 만 사용하세요
// 3. 그런데, static_cast 가 에러가 나오면 용도에 따라 아래 2개중 한개사용하세요
// => reinterpret_cast 
// => const_cast


// dynamic_cast : runtime cast 라는 개념
//				  내일 상속 배운후에 설명