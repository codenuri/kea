#include <iostream>
#include <vector>


class Shape
{
	int color;
public:
	void set_color(int c) { color = c; }

	virtual int get_area() const { return -1; }


	virtual void draw() { std::cout << "draw shape\n"; }
};



class Rect : public Shape
{
public:
	virtual void draw() { std::cout << "draw rect\n"; }
};

class Circle : public Shape
{
public:
	virtual void draw() { std::cout << "draw circle\n"; }
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
			for (auto p : v)

				p->draw();	
		}

		else if (cmd == 8)
		{
			std::cout << "몇번째 만든 도형을 복사 할까요 >> ";
			int k;
			std::cin >> k;

			// k번째 도형과 동일한 도형을 만들어서 v에 추가합니다.
			// 그런데, k 번째 도형은 어떤 타입일까요 ?
			// 어떻게 구현해야 할까요 ?

		}
	}
}

