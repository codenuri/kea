#include <iostream>

// Derived �Ҹ��ڿ��� �ϴ� ���� ���ų�,
// Base* p = new Derived ���� ���·� ������ delete p �ϴ� �ڵ尡 ���ٸ�
// �Ҹ��ڸ� virtual ������ �ʾƵ� �˴ϴ�.

// ��, �̰��� Base* �� delete �� ���ϰ� �ϴ� ���� �����մϴ�.
// => protected �Ҹ���!

class Base
{
public:
	Base() {}

protected:
	~Base() {} 
};

class Derived : public Base
{
public:
	Derived() { std::cout << "Derived()  �ڿ��Ҵ�" << std::endl; }
	~Derived() 
	{ 
		std::cout << "~Derived() �ڿ��ݳ�" << std::endl; 
		// Base::~Base()
	}
};

int main()
{
	Base* p = new Derived;	

//	delete p;	// �̼��� p->~Base() �� ȣ���ؾ� �ϴµ�,
				// �Ҹ��ڰ� protected �� �����Ƿ� ������ ����

	// delete �Ϸ��� �ݵ�� "Derived" Ÿ������ ĳ�����ؼ� �϶�� �ǵ�
	delete static_cast<Derived*>(p);

}

// C++ ������ �ʹ� ��ư� �����ؼ� C++ â���ڰ� ���̵� ������ �ۼ��ϰ� �ֽ��ϴ�
// => ���ۿ��� "C++ Core guidelines" �˻� �� 1��° ��ũ
// 
// => �ڵ��� ������ "MISRA C++" �� �ᱹ �� ���̵������ �����ؼ� �ۼ�