#include <iostream>

// 객체 생성시.
// => 멤버 데이타의 생성자도 호출되는데, 
// => 절대, 실행결과를 보고, 문법을 예측하지 마세요 - 대부분 잘못된 지식을 얻게 됩니다.
// => 정확한 원리를 알아야 합니다.

class Point
{
	int x, y;
public:
	Point()				{ std::cout << "Point()" << std::endl; }
	Point(int a, int b) { std::cout << "Point(int, int)" << std::endl; }
};

class Rect
{
	Point ptFrom;
	Point ptTo;
public:
	// Rect 생성자에 컴파일러가 아래 주석을 추가 하게 됩니다.
	// => godbolt.org 에 현재 소스 넣으세요
	// => Rect 생성자의 어셈블리 코드 확인하세요
	Rect()
	{
		// call Point::Point() <= ptFrom 에 대해서
		// call Point::Point() <= ptTo   에 대해서

		std::cout << "Rect()" << std::endl;
	}
};

int main()
{
	Rect r; // call Rect::Rect() 의 기계어 코드
}




