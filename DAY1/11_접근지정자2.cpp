#include <iostream>

// ����������(access specifiers) : private, public 


// C++ ������ struct �� class Ű���� �������� �� �Ѱ��� �Դϴ�.
// => �Ʒ� ����
// => �׿ܴ� ������ �����մϴ�.
// => ��, java, C# ������ struct, class �� ������ �ٸ� �뵵
// => Rust �� class Ű���� ����. struct �� ����. 

// struct : ���������ڸ� ������ ����Ʈ�� public
// class  : ���������ڸ� ������ ����Ʈ�� private


//struct Person
class Person
{
//private:
	int age;
	int weight;

public:	
	void set_age(int a)
	{
		if (a > 0 && a < 150)
			age = a;
	}
};

int main()
{
	Person p;
	p.set_age(-10);


}
