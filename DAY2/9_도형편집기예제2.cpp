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
			for (auto p : v)	//    ���⼭ p �� Shape*�ε�
				p->draw();		// A. Shape ���� draw�� ����.
		}
	}
}
// �� �ڵ尡 ��𿡼� ? �� �����ϱ�� ?
// => A �κп��� ����!
// 
// �ذ�å�� �����ϱ�� ??
// => �����ҽ����� �ذ�..
// 
// �����ϽǶ�. ������ ���� ��Ȯ�� ���� �ϼ���. 
