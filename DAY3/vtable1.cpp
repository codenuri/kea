// vtable1.cpp - 153 page
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
	Animal a1, a1;
	Dog d1;

	Animal* p = &d1;
	p->cry();
}