// 예제1     149 page ~
#include <iostream>
#include <vector>

// 파워 포인트 같이 도형을 관리하는 프로그램을 만들어 봅시다.
// 의도 : upcasting 과 virtual function 이야기


// 핵심 #1. 각 도형을 타입으로 설계 한다.


class Rect
{
public:
	void draw() { std::cout << "draw rect\n"; }
};

class Circle
{
public:
	void draw() { std::cout << "draw circle\n"; }
};

int main()
{
	std::vector<Rect*> v;
}



