// 7_�����Լ�1  143 page ~
#include <iostream>

class Animal
{
public:
	// non-virtual : C++ �⺻ ���ε��� static binding �϶�� ��
	//				 ȣ��� ������ Ÿ������ �Լ��� ������ �޶�
	void Cry1() { std::cout << "Animal Cry1" << std::endl; }


	// virtual : dynamic binding �ش޶�� ��
	//			 ȣ���, ������ Ÿ���� �ƴ϶�, ����� �޸𸮸� �����ؼ� ��ü�� ������ ����
	//			 ȣ���� ������ �޶�.
	virtual void Cry2() { std::cout << "Animal Cry2" << std::endl; }
};

class Dog : public Animal
{
public:
	void Cry1() { std::cout << "Dog Cry2" << std::endl; } 
	

	virtual void Cry2() { std::cout << "Dog Cry2" << std::endl; }
};

int main()
{
	Animal a; 
	Dog    d; 

	Animal* p = &d;

	p->Cry1();	// static  binding �̹Ƿ� Animal Cry1
	p->Cry2();	// dynamic binding �̹Ƿ� Dog Cry2


}
