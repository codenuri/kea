#include <iostream>
#include <vector>

// ���� ���� Shape ������ ������ ���ô�.

class Shape
{
	int color;
public:
	virtual ~Shape() {}	// ��� Ŭ���� �Ҹ��ڴ� virtual �̾�� �Ѵ�.

	void set_color(int c) { color = c; }

	// �����Լ�     : �Ļ� Ŭ������ override ���� ������ �⺻ ���� �����ϰڴٴ� �ǹ�.
	// ���������Լ� : �Ļ� Ŭ������ �ݵ�� ������  �Ѵٰ� �����ϴ°�.

	virtual void draw() = 0;
	virtual Shape* clone() const = 0;

	// get_area() ��
	// 1. =0 ���� �ؼ� �Ļ� Ŭ������ �ݵ�� ����� �ص� �˴ϴ�.
	//    => �׷���, �̰�� �Ļ�Ŭ������ �ݵ�� ������ �ϴ� ���� �ʹ� ���� ���� �ֽ��ϴ�.
	// 
	// 2. �Ǵ�, �߸��� ������ ����� ���� ��ȯ�ϴ� �⺻ ������ �����ϱ⵵ �մϴ�.
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
			std::cout << "���° ���� ������ ���� �ұ�� >> ";
			int k;
			std::cin >> k;

			v.push_back(v[k]->clone());	

		}
	}
}