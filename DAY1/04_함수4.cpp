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
	square<int>(3);
	square<double>(3.4);
}