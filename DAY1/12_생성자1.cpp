#include <iostream>
#include <string>

// std::string : ���ڿ��� �����ϴ� Ÿ��. ���� �ڼ��� 

class Person
{
//public:
private:
	std::string name;
	int  age;

public:
	void init(const std::string& n, int a)
	{
		name = n;
		age  = a;
	}
	// ������
	// 1. Ŭ���� �̸��� ������ �̸��� �Լ�
	// 2. ��ü�� �����ϸ� �ڵ����� ȣ��ȴ�
	Person(const std::string& n, int a)
	{
		name = n;
		age = a;
	}
};

int main()
{
	// #1. class ���� ��� ��� ����Ÿ�� public �� �ִٸ� 
	// => �ᱹ C ��� ����ü �̹Ƿ�, ����ü �ʱ�ȭ ������ ={}�� �ʱ�ȭ����
	// Person p = { "kim", 28 };


	// #2. ��� ����Ÿ�� private �� �ִٸ� ��ó�� �ʱ�ȭ �ȵ˴ϴ�.
	// => ����Լ��� �ʱ�ȭ�ؾ� �մϴ�.
//	Person p;
//	p.init("kim", 28); 


	// #3. ��ü�� �����Ŀ� init() ȣ���ؼ� �ʱ�ȭ ���ٴ�
	//     "��ü�� ���鶧 �ڵ����� �ʱ�ȭ" �� �� �����ϴ�.
	Person p("kim", 28); // <= ��ü ������ �ʱ�ȭ�ϴ� �ڵ�
						 // <= ������ ��� ��ӵ� �Լ� ȣ��
}



