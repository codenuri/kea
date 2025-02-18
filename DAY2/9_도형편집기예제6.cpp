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
			std::cout << "���° ���� ������ ���� �ұ�� >> ";
			int k;
			std::cin >> k;

			// k��° ������ ������ ������ ���� v�� �߰��մϴ�.
			// �׷���, k ��° ������ � Ÿ���ϱ�� ?
			// ��� �����ؾ� �ұ�� ?

		}
	}
}

