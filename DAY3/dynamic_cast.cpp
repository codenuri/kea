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

	Dog* pd = static_cast<Dog*>(p);

	std::cout << pd << std::endl;

}
