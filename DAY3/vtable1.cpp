// vtable1.cpp - 153 page ~ 
// => 154 page �׸� ���� �ϸ� �˴ϴ�.
// => �����Լ��� ����

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

int main()
{
	Animal a1, a2;
	Dog d1;

	Animal* p = &d1;

	p->cry();	// �����Լ� �̹Ƿ�
				// 1. ����ð��� p�� ����Ű�� ���� �����ؼ�
				// 2. ��ü�� ������ �°� cry ȣ��
}

// �ٽ� #1. p�� ����Ű�� ���� � Ÿ������ ��� �����ұ� ?
// => � Ÿ������ ���簡���ϵ��� ������ �޸𸮿� �߰��Ǿ�� �Ѵ�.

// �ٽ� #2. � Ÿ������ �˾Ƶ� ��� �Լ��� �ұ� ?
// => ��� �����Լ� �ּҰ� �޸𸮿� �����Ǿ�� �Ѵ�.
// => �� �κп��� �޸� ������� �߻�