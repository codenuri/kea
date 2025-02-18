// 예제1     149 page ~
#include <iostream>
#include <vector>

// 파워 포인트 같이 도형을 관리하는 프로그램을 만들어 봅시다.
// 의도 : upcasting 과 virtual function 이야기


// 핵심 #1. 각 도형을 타입으로 설계 한다.

// 핵심 #2. 모든 도형은 공통의 특징(color) 이 있다.
//	        기반 클래스(Shape) 가 있다면
//      장점 1. 기반 클래스를 통해서 공통의 특징 관리
//      장점 2. std::vector<Shape*> 를 사용하면  모든 도형객체를 같이 보관가능


class Shape
{
	int color;
public:
};

class Rect : public Shape
{
	// int x, y, w, h, 생성자 등... 생략(있다고 가정)
public:
	void draw() { std::cout << "draw rect\n"; }
};

class Circle : public Shape
{
public:
	void draw() { std::cout << "draw circle\n"; }
};

int main()
{
//	std::vector<Rect*> v; // Rect 만 보관 가능한 vector
	std::vector<Shape*> v; // 모든 도형 객체를 한곳에 보관할수 있다.
}



