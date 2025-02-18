#include <iostream>
#include <vector>

// 핵심 #5. 다형성(Polymorphism)
// => OCP 를 만족하는 좋은 코딩 스타일
// => main 의 주석 참고




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

				p->draw();	// 이 한줄을 생각해 보세요

				// 동일한 표현식(코드)이 상황(실제 객체가 무엇인가)에 따라
				// 다르게 동작합니다.
				// "다형성(polymorphism)"

				// 다형성의 장점
				// => 새로운 도형(triangle)이 추가되어도 위 한줄은 수정될 필요 없습니다
				// => 즉, OCP를 만족합니다.
		}
	}
}

