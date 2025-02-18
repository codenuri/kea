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
			// �ذ�å #1. Shape* �� p�� Rect* �� Circle* �� ĳ�����ؼ� ���
			// => p �� ����Ű�� ���� �����ؾ� �Ѵ�.
			// => RTTI ��� �Ǵ� dynamic_cast ���
			for (auto p : v)
			{
				if (p �� Rect �� ����Ű��)
				{
					static_cast<Rect*>(p)->draw();
				}
				else if (p �� Circle �� ����Ű��)
				{
					static_cast<Circle*>(p)->draw();
				}
			}
		}
	}
}
// ���� �ѱ۸� �ڵ�� �����ϸ� �˴ϴ�. - ���� ���� ���!!
// �׷���, ���ڵ�� ���� ������ �ϱ�� ?
