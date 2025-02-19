#include <iostream>

// �ݵ�� �˾ƾ��� �ʼ� ����
// => ��� ������ ����Ѵٸ�
// => ��� Ŭ���� �Ҹ��ڸ� �ݵ�� virtual �ϼ���
// => "����Ҹ���" ��� �Ҹ��� ����

class Base
{
public:
	Base()  {  }
//	~Base() {  }
	virtual ~Base() {} // �ٽ� : ��� Ŭ������ �Ҹ��ڴ� virtual �̾�� �մϴ�.
						// ��� Ŭ���� �Ҹ��ڰ� virtual �̸�
						// ��� �Ļ� Ŭ���� �Ҹ��ڵ� �ڵ����� virtual �Դϴ�.
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
	Base* p = new Derived;	// 1. sizeof(Derived) �޸� �Ҵ�
							// 2. ������ ȣ�� - �ڵ忡 Derived Ŭ������� ǥ�������Ƿ�
							//					Derived ������ ȣ��
	
	delete p;	// 1. �Ҹ��� ȣ��
				// 2. �޸� ����

	// �Ҹ��ڵ� �Լ� �̹Ƿ� �ᱹ �Ʒ� ���� �ǹ̰� �˴ϴ�.
	// p->�Ҹ���()
	// �ᱹ �Լ� ȣ���̹Ƿ� static binding ���� dynamic binding ���� �����ؾ� �մϴ�

	// 1. ������ �ð����� p �� ����Ű�� ���� �˼� ����, p ��ü�� Ÿ���� Base* ��°͸��˰�
	//    �ֽ��ϴ�.

	// 2. �׷��� Base Ŭ������ ������ ���� �Ҹ��ڰ� virtual ���� ����

	// �Ҹ��� virtual �� �ƴϸ� : static binding �ϹǷ� ������ Ÿ������ �Ҹ��� ����
	//							p->~Base() �� ȣ��.

	// �Ҹ��� virtual �̸� : dynamic binding �ϹǷ� �޸� �����ؼ� ȣ�� ����
	//							p->~Derived()  

}