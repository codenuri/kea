#include <iostream>
#include <vector>

// 핵심 #3. 파생 클래스의 공통의 특징은 기반 클래스에도 있어야 한다.
//	=> 문법적인 제약이 아닌
//  => 디자인 원칙
//  => Shape* 로 draw() 를 호출하려면 Shape 안에 draw() 있어야 한다.


// 핵심 #4. 기반 클래스 멤버 함수중, 파생 클래스가 override 하게 되는 것은
//			virtual 함수로 만들어야 한다!!
// => 어떤 멤버 함수를 를 virtual 로 할지 non-virtual 로 할지 잘 판단하세요
// => 아래 Shape 클래스 참고

class Shape
{
	int color;
public:
	// 아래 멤버 함수는 virtual 로 할까요 ? non-virtual 로 할까요 ?
	// => 파생 클래스가 override 할 이유 없습니다 - non-virtual
	// => virtual 로 해도 되지만, virtual 는 느립니다.
	void set_color(int c) { color = c; }


	// 도형의 면적 구하는 방법은 모든 도형이 다릅니다.
	// => 파생 클래스가 override 해야 합니다
	// => virtual!!
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
	}
}

