#include <iostream>

// �ݵ�� �˾ƾ��� �ʼ� ����

class Base
{
public:
	Base()  {  }
	~Base() {  }
};
class Derived : public Base
{
public:
	Derived()  { std::cout << "Derived()  �ڿ��Ҵ�" << std::endl; }
	~Derived() { std::cout << "~Derived() �ڿ��ݳ�" << std::endl; }
};

int main()
{
//	Derived d;	// ok

//	Derived* p = new Derived;
//	delete p;	// ok

	// �ٽ��� �Ʒ� �ڵ��Դϴ�.
	Base* p = new Derived;
	delete p;	

}