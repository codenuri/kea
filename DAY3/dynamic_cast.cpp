#include <iostream>

class Animal
{
	int age;
public:
	virtual void cry() {}
	virtual void run() {}
};

class Dog : public Animal
{
	int color;
public:
	void cry() override {}
};

class Cat : public Animal
{
	int speed;
public:
	void cry() override {}
};

int main()
{
	Dog d;
	Cat c;

	Animal* p = &c;

	// p �� ����Ű�� ���� ���� Dog �� �ƴ� Cat �Դϴ�.
	// �׷���, Dog* �� ĳ���� �Ϸ��� �մϴ�.

	// static_cast : ������ �ð� ĳ����
	//			     �����Ϸ��� p �� ����Ű�� ���� �˼� �����ϴ�.
	//				 �Ʒ� �ڵ尡 �߸��Ǿ�����, �����Ϸ��� �˼� �����ϴ�.
	//				 �������� ��û�̹Ƿ� ������ ����մϴ�.
	//				 pd1 �� �ִ� �ּҴ� Cat �ε�, Dog ó�� ����ϹǷ� ����.
	Dog* pd1 = static_cast<Dog*>(p);

	std::cout << pd1 << std::endl;

	// dynamic_cast : ����ð� ĳ����
	//				����ð��� �����Լ� ���̺� �ִ�
	//				type ������ Ȯ���ؼ� ĳ����
	//				Ÿ���� �ٸ� ��� 0 ��ȯ
	Dog* pd2 = dynamic_cast<Dog*>(p);

	std::cout << pd2 << std::endl; // 0
}
