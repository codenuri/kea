#include <iostream>

// 아래 코드 실행결과 예측해 보세요
class Point
{
public:
	int x, y;

	// 멤버 초기화 리스트는 "대입"이 아닌 "초기화" 입니다.
	// => 초기화 코드 순서로 실행되는것이 아니라
	// => 멤버가 놓인 순서대로 초기화 됩니다.
	//        (2)    (1)  의 순서로 실행됩니다. x 가초기화 될때 y 는 아직 없습니다. 
	Point() : y(0), x(y)	// 미정의 동작 발생. 버그.
	{						// 핵심 : 멤버데이타가 놓인 순서대로 초기화 코드를 작성하세요
	}						// Point() : x(0), y(0)
};
int main()
{
	Point pt;

	std::cout << pt.x << std::endl; // ?
	std::cout << pt.y << std::endl; // ?
}




