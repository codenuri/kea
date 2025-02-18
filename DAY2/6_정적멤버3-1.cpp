#include <iostream>


class Car
{
	int color;
	int speed;
public:
	static int count;	

	Car() { ++count; }
	~Car() { --count; }
};

int Car::count = 0;

// static ��� ����Ÿ�� Ư¡(�ǹ�)
// 1. Ŭ���� �ܺ� ���ǰ� �ᱹ "Car ���� ��������"�� ����� �ڵ��̹Ƿ�
//    Car �� ��ü�� �Ѱ��� ��� "Car::count" �� �޸𸮿� �ִ� - ���������� ����

// 2. Car ��ü�� �����, non-static ����� ��ü�� �޸� ������ �ְ� �˴ϴ�

int main()
{
	// ��ü�� ��� Car::count �� �޸𸮿� �����Ƿ�
	// ��ü ���� �Ʒ� ó�� �����ϸ�˴ϴ�.
	std::cout << Car::count << std::endl; // 0

	Car c1;
	Car c2;

	std::cout << Car::count << std::endl; // 2


	// #3. C++���� static ��� ����Ÿ ���� ����� 2�� �Դϴ�(public �϶�)
	//  1. Ŭ���� �̸����� ���� : Car::count
	//  2. ��ü   �̸����� ���� : c1.count

	std::cout << Car::count << std::endl;
	std::cout << c1.count << std::endl;
	std::cout << c2.count << std::endl;	// c1.count �� ���� �޸� ����

	// ���� : Ŭ���� �̸����� �����ϼ���. �������� �����ϴ�.
	// => java, C# ���� �ٸ� ���� "Ŭ�����̸����θ� ����" ����
}

