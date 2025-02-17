#include <iostream>
#include <string>

// std::string : 문자열을 보관하는 타입. 내일 자세히 

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
	// 생성자
	// 1. 클래스 이름과 동일한 이름의 함수
	// 2. 객체를 생성하면 자동으로 호출된다
	Person(const std::string& n, int a)
	{
		name = n;
		age = a;
	}
};

int main()
{
	// #1. class 안의 모든 멤버 데이타가 public 에 있다면 
	// => 결국 C 언어 구조체 이므로, 구조체 초기화 문법인 ={}로 초기화가능
	// Person p = { "kim", 28 };


	// #2. 멤버 데이타가 private 에 있다면 위처럼 초기화 안됩니다.
	// => 멤버함수로 초기화해야 합니다.
//	Person p;
//	p.init("kim", 28); 


	// #3. 객체를 만든후에 init() 호출해서 초기화 보다는
	//     "객체를 만들때 자동으로 초기화" 가 더 좋습니다.
	Person p("kim", 28); // <= 객체 생성시 초기화하는 코드
						 // <= 생성자 라는 약속된 함수 호출
}



