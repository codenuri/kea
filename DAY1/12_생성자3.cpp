#include <iostream>

class Point
{
	int x;
	int y;
public:
	// 생성자 관련 핵심 정리 이므로 아래 모든 내용은 외워 두세요
	// 생성자 활용은 내일 1교시..
	
	
	// #2. 객체를 만들면 반드시 생성자가 호출되어야 한다.
	// #3. 생성자를 한개도 만들지 않으면 컴파일러가 디폴트 생성자는 제공합니다.
	// => 인자없는 생성자
	// => 사용자가 한개라도 만들면 컴파일러는 디폴트 생성자 제공안함.
	// 
	Point()             { x=0; y=0; std::cout << "Point()"         << std::endl; } // 1
	Point(int a, int b) { x=a; y=b; std::cout << "Point(int, int)" << std::endl; } // 2
};
int main()
{
	// #1. 객체를 만드는 방법
	// => C++98 부터 사용하던 표기법
	Point p1;		
	Point p2(1, 2); 


	// => C++11 부터는 아래 2개 표기법 가능
	Point p3{ 1,2 };   
	Point p4 = { 1,2 };	// 구조체 초기화와 동일하지만, 생성자 호출하는 표현





	// #4. Point 타입의 배열을 만들면 요소의 갯수만 큼 생성자가 호출됩니다.
	
	Point arr1[5];						// 인자 없는 생성자가 5회 호출
	Point arr2[5] = { {1,2},{2,3} };	// 인자  2개 생성자가 2회 호출
										// 인자 없는 생성자가 3회 호출
										
	
	// #5. 포인터변수는 객체를 만든것은 아니므로 생성자 호출안됨

	Point* p; 


	// #6. malloc 은 "특정 크기"의 메모리를 할당하는 것
	p = (Point*)malloc( sizeof(Point) );	// Point 타입을 할당한것이 아니라
											// 8 바이트 메모리를 할당한것	
											// 생성자 호출 안됨.
	free(p);	// 소멸자 호출 안됨.


	p = new Point;	// 8바이트 메모리 할당이 아니라, 
					// Point 타입의 객체를 힙에 생성해 달라는 의미
					// 메모리 할당후, 디폴트 생성자 호출.. 
	delete p;		// 소멸자 호출


	p = new Point(1, 1);	// 인자 2개인 생성자 호출.
	delete p;				
	
}