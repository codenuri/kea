#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea() { return (right - left) * (bottom - top); }
	void draw() { std::cout << "draw rect" << std::endl; }
};
int main()
{
	// #1. 용어 정리
	int n1 = 10;	// n1은 "변" 하는 "수" 
	n1 = 20;        // 변수 라고 합니다.

	Rect r = { 1,1,10,10 };

	// r은 "변하는 수" 라기 보다는 사각형 한개를 표현합니다. 
	// "객체" 라는 용어를 사용합니다.

	// 객체(object) : "세상에 존재하는 모든 사물"
	//		          
	// 일부 프로그래밍 언어에서는 "int n" 도 객체라고 부릅니다.

	// 그런데, C++은 관례상
	// primitive   타입을 메모리에 생성한것 : 변수
	// user define 타입을 메모리에 생성한것 : 객체
	//---------------------------------------------------------
	// 
	// #2. 메모리 layout 정확히 알아두세요
	// => 멤버 데이타만 객체당 한개씩 생성됩니다.
	// => 멤버 함수는 코드메모리에 한개만 있습니다.
	//    즉, 객체를 10개 만들어도 draw() 함수는 한개만 코드메모리에 있는것
	Rect r1 = { 1,1,10,10 }; 
	Rect r2 = { 1,1,10,10 };

	std::cout << sizeof(r1) << std::endl; // 16 byte
}

