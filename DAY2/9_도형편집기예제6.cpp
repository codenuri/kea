#include <iostream>
#include <vector>


class Shape
{
	int color;
public:
	void set_color(int c) { color = c; }

	virtual int get_area() const { return -1; }
	virtual void draw() { std::cout << "draw shape\n"; }

	// 자신과 동일한 상태의 복사본을 만드는 가상함수는 아주 유용하게 사용됩니다
	virtual Shape* clone() const
	{
		Shape* s = new Shape;
		s->color = this->color; // 모든 상태를 동일하게 만들어서
		return s;
	}
};



class Rect : public Shape
{
public:
	virtual void draw() { std::cout << "draw rect\n"; }

	virtual Shape* clone() const
	{
		return new Rect;
	}
};

class Circle : public Shape
{
public:
	virtual void draw() { std::cout << "draw circle\n"; }


	virtual Shape* clone() const
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

			// k번째 도형과 동일한 도형을 만들어서 v에 추가합니다.
			// 그런데, k 번째 도형은 어떤 타입일까요 ?
			// 어떻게 구현해야 할까요 ?

			// 아래 처럼 하면 OCP 만족 못합니다
			/*
			if (v[k] 도형이 Rect 라면)
			{
			}
			else if (v[k] 도형이 Rect 라면)
			{
			}
			*/

			// 핵심 : k 번째 도형을 조사할 필요 없습니다.
			//       그냥 복사본 요청하세요
			//		 이런기술을 "don't ask do it" 이라고 합니다.

			v.push_back( v[k]->clone() );	// 다형성
											// 새로운 도형이 추가되어도
											// 이 코드는 수정되지 않습니다.
		}
	}
}

