#include <iostream>

// 객체 생성시.
// => 멤버 데이타의 생성자도 호출되는데, 
// => 절대, 실행결과를 보고, 문법을 예측하지 마세요 - 대부분 잘못된 지식을 얻게 됩니다.
// => 정확한 원리를 알아야 합니다.

class Point
{
	int x, y;
public:
	Point() { std::cout << "Point()" << std::endl; }
	Point(int a, int b) { std::cout << "Point(int, int)" << std::endl; }
};

class Rect
{
	Point ptFrom;
	Point ptTo;
public:
	/*
	Rect()
	{
		// 핵심 : 컴파일러가 추가하는 코드는 항상 Point 의 디폴트생성자(인자없는 생성자) 
		//        를 호출합니다.
		// call Point::Point()
		// call Point::Point()

		std::cout << "Rect()" << std::endl;
	}
	*/

	// 멤버 데이타의 다른 생성자를 호출하고 싶다면 아래 처럼 표기 합니다.
	// => 멤버 초기화 리스트 형태로 생성자 모양 지정
	Rect() : ptFrom(1, 1), ptTo()
	{
		// 사용자가 만든 위 코드 때문에 컴파일러가 생성하는 코드가 아래 처럼 변경
		// call Point::Point(int, int)
		// call Point::Point()

		std::cout << "Rect()" << std::endl;
	}

};

int main()
{
	Rect r; 
}




