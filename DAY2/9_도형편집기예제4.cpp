#include <iostream>
#include <vector>

// �ٽ� #3. �Ļ� Ŭ������ ������ Ư¡�� ��� Ŭ�������� �־�� �Ѵ�.
//	=> �������� ������ �ƴ�
//  => ������ ��Ģ
//  => Shape* �� draw() �� ȣ���Ϸ��� Shape �ȿ� draw() �־�� �Ѵ�.


// �ٽ� #4. ��� Ŭ���� ��� �Լ���, �Ļ� Ŭ������ override �ϰ� �Ǵ� ����
//			virtual �Լ��� ������ �Ѵ�!!
// => � ��� �Լ��� �� virtual �� ���� non-virtual �� ���� �� �Ǵ��ϼ���
// => �Ʒ� Shape Ŭ���� ����

class Shape
{
	int color;
public:
	// �Ʒ� ��� �Լ��� virtual �� �ұ�� ? non-virtual �� �ұ�� ?
	// => �Ļ� Ŭ������ override �� ���� �����ϴ� - non-virtual
	// => virtual �� �ص� ������, virtual �� �����ϴ�.
	void set_color(int c) { color = c; }


	// ������ ���� ���ϴ� ����� ��� ������ �ٸ��ϴ�.
	// => �Ļ� Ŭ������ override �ؾ� �մϴ�
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

