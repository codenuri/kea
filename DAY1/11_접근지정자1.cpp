// 4_����������1 - 76page~
#include <iostream>

struct Person
{
private:		// �� ������ �ִ� ����� �ܺο����� �����Ҽ� ����
				// ��� �Լ������� ���� �����մϴ�.
	int age;	
	int weight;

public:			// �̿����� �ִ� ��� ����� �ܺο����� ���� �����մϴ�
				// �ַ�, ��� �Լ��� �̿����� ���� �˴ϴ�.
	void set_age(int a)
	{
		age = a;
	}
};

int main()
{
	Person p;

//	p.age = -10; // error. private ������ �����Ƿ� ����� �ƴ� �Լ�(main)������
				 //        �����Ҽ� ����.
	p.set_age(-10);

				 
}
