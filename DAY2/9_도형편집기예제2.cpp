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

		if      (cmd == 1) v.push_back(new Rect);
		else if (cmd == 2) v.push_back(new Circle);
		else if (cmd == 9)
		{
			for (auto p : v)	//    여기서 p 는 Shape*인데
				p->draw();		// A. Shape 에는 draw가 없다.
		}
	}
}
// 위 코드가 어디에서 ? 왜 에러일까요 ?
// => A 부분에서 에러!
// 
// 해결책은 무엇일까요 ??
// => 다음소스에서 해결..
// 
// 복습하실때. 에러의 원인 정확히 이해 하세요. 
