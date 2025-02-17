#include <iostream>

// C++ 코딩 스타일
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

// java, C#, swift, rust 등의 대부분의 다른 언어는
// 멤버 별로 접근지정자 표시
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