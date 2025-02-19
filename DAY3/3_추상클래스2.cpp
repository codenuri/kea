#include <iostream>
#include <vector>

// 어제 만든 Shape 예제를 개선해 봅시다.

class Shape
{
	int color;
public:
	virtual ~Shape() {}	// 기반 클래스 소멸자는 virtual 이어야 한다.

	void set_color(int c) { color = c; }

	// 가상함수     : 파생 클래스가 override 하지 않으면 기본 구현 제공하겠다는 의미.
	// 순수가상함수 : 파생 클래스가 반드시 만들어야  한다고 지시하는것.

	virtual void draw() = 0;
	virtual Shape* clone() const = 0;

	// get_area() 는
	// 1. =0 으로 해서 파생 클래스가 반드시 만들게 해도 됩니다.
	//    => 그런데, 이경우 파생클래스가 반드시 만들어야 하는 것이 너무 많아 질수 있습니다.
	// 
	// 2. 또는, 잘못된 것으로 약속한 값을 반환하는 기본 구현을 제공하기도 합니다.
	virtual int get_area() const { return -1; }

};



class Rect : public Shape
{
public:
	void draw() override { std::cout << "draw rect\n"; }

	Shape* clone() const override
	{
		return new Rect;
	}
};

class Circle : public Shape
{
public:
	void draw() override { std::cout << "draw circle\n"; }


	Shape* clone() const override
	{
		return new Circle;
	}
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

			v.push_back(v[k]->clone());	

		}
	}
}