#include <iostream>

// ��ü ������.
// => ��� ����Ÿ�� �����ڵ� ȣ��Ǵµ�, 
// => ����, �������� ����, ������ �������� ������ - ��κ� �߸��� ������ ��� �˴ϴ�.
// => ��Ȯ�� ������ �˾ƾ� �մϴ�.

class Point
{
	int x, y;
public:
	Point() { std::cout << "Point()" << std::endl; }
	Point(int a, int b) { std::cout << "Point(int, int)" << std::endl; }
};

class Rect
{
	Point ptFrom;
	Point ptTo;
public:
	/*
	Rect()
	{
		// �ٽ� : �����Ϸ��� �߰��ϴ� �ڵ�� �׻� Point �� ����Ʈ������(���ھ��� ������) 
		//        �� ȣ���մϴ�.
		// call Point::Point()
		// call Point::Point()

		std::cout << "Rect()" << std::endl;
	}
	*/

	// ��� ����Ÿ�� �ٸ� �����ڸ� ȣ���ϰ� �ʹٸ� �Ʒ� ó�� ǥ�� �մϴ�.
	// => ��� �ʱ�ȭ ����Ʈ ���·� ������ ��� ����
	Rect() : ptFrom(1, 1), ptTo()
	{
		// ����ڰ� ���� �� �ڵ� ������ �����Ϸ��� �����ϴ� �ڵ尡 �Ʒ� ó�� ����
		// call Point::Point(int, int)
		// call Point::Point()

		std::cout << "Rect()" << std::endl;
	}

};

int main()
{
	Rect r; 
}




