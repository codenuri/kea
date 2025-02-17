#include <iostream>

// 접근지정자(access specifiers) : private, public 


// C++ 에서는 struct 와 class 키워드 차이점은 단 한가지 입니다.
// => 아래 내용
// => 그외는 완전히 동일합니다.
// => 단, java, C# 에서는 struct, class 는 완전히 다른 용도
// => Rust 는 class 키워드 없음. struct 만 존재. 

// struct : 접근지정자를 생략시 디폴트가 public
// class  : 접근지정자를 생략시 디폴트가 private


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
