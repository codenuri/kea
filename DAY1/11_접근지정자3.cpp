#include <iostream>

// C++ �ڵ� ��Ÿ��
class Person
{
private:
	int age;
	int weight;

public:
	void set_age(int a)
	{
		if (a > 0 && a < 150)
			age = a;
	}

private:

};

// java, C#, swift, rust ���� ��κ��� �ٸ� ����
// ��� ���� ���������� ǥ��
class Person
{
	private int age;
	private int weight;

	public void set_age(int a)
	{
		if (a > 0 && a < 150)
			age = a;
	}
};