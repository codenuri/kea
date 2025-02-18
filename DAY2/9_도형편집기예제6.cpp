#include <iostream>
#include <vector>


class Shape
{
	int color;
public:
	void set_color(int c) { color = c; }

	virtual int get_area() const { return -1; }
	virtual void draw() { std::cout << "draw shape\n"; }

	// �ڽŰ� ������ ������ ���纻�� ����� �����Լ��� ���� �����ϰ� ���˴ϴ�
	virtual Shape* clone() const
	{
		Shape* s = new Shape;
		s->color = this->color; // ��� ���¸� �����ϰ� ����
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
			std::cout << "���° ���� ������ ���� �ұ�� >> ";
			int k;
			std::cin >> k;

			// k��° ������ ������ ������ ���� v�� �߰��մϴ�.
			// �׷���, k ��° ������ � Ÿ���ϱ�� ?
			// ��� �����ؾ� �ұ�� ?

			// �Ʒ� ó�� �ϸ� OCP ���� ���մϴ�
			/*
			if (v[k] ������ Rect ���)
			{
			}
			else if (v[k] ������ Rect ���)
			{
			}
			*/

			// �ٽ� : k ��° ������ ������ �ʿ� �����ϴ�.
			//       �׳� ���纻 ��û�ϼ���
			//		 �̷������ "don't ask do it" �̶�� �մϴ�.

			v.push_back( v[k]->clone() );	// ������
											// ���ο� ������ �߰��Ǿ
											// �� �ڵ�� �������� �ʽ��ϴ�.
		}
	}
}

