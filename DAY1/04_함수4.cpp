// 39p ~
// C++ 함수의 특징 4. 함수 템플릿 
// => C++에서 가장 중요한 특징중 한개 - 완벽히 이해 하세요.. 아주 중요

/*
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
*/

// 유사한 함수가 타입별로 필요하면
// 함수를 만들지 말고 
// 함수를 만드는 "틀"을 제공합니다.

// 아래 코드는 함수가 아닙니다. 함수를 찍어내는 "틀" 입니다.
template<typename T> 
T square(T a)
{
	return a * a;
}

int main()
{
	// 틀을 사용해서 함수를 생성하고 사용하기
	// #1. 타입 전달 
	square<int>(3);		// 1. 틀을 사용해서 컴파일 시간에
						//    int square(int) 함수를 생성하고
						// 2. 이 위치를 call square(int) 코드로 컴파일

	square<double>(3.4);// 1. double square(double) 함수를 생성
						// 2. call square(double)

	// #2. 템플릿 사용시 타입인자 생략가능합니다.
	//     이 경우는 함수 인자를 보고 컴파일러가 타입결정
	square(3);	 // 3이라는 인자 때문에 T = int 로 결정
	square(3.4); // T = 3.4
}

// 완벽하게 이해 하려면 "godbolt.org" 에서 기계어 보세요