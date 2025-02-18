#include <iostream>
#include <vector>

class Shape
{
	int color;
public:
};

class Rect : public Shape
{
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
	std::vector<Shape*> v;

	while (true)
	{
		int cmd;

		std::cin >> cmd;

		if (cmd == 1) v.push_back(new Rect);
		else if (cmd == 2) v.push_back(new Circle);
		else if (cmd == 9)
		{
			// 해결책 #1. Shape* 인 p를 Rect* 나 Circle* 로 캐스팅해서 사용
			// => p 가 가리키는 곳을 조사해야 한다.
			// => RTTI 기술 또는 dynamic_cast 사용
			for (auto p : v)
			{
				if (p 가 Rect 를 가리키면)
				{
					static_cast<Rect*>(p)->draw();
				}
				else if (p 가 Circle 를 가리키면)
				{
					static_cast<Circle*>(p)->draw();
				}
			}
		}
	}
}
// 위에 한글만 코드로 변경하면 됩니다. - 내일 배우는 기술!!
// 그런데, 이코드는 좋은 디자인 일까요 ?
// => 새로운 도형(Triangle)이 추가되면 if 문에 추가되어야 합니다
// => OCP 위반. 안좋은 디자인

// 기능 확장에는 열려있고(Open, 새로운 클래스가 추가되어도)
// 코드 수정에는 닫혀야 (Close, 기존 코드는 수정되지 않도록)
// 하라는 원칙(Principle)

// Open-Close Principle(개방 폐쇄의 법칙)
