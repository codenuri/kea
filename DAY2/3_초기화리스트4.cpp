#include <iostream>
#include <string>

class Person1
{
	std::string name;
	int age;
public:
	// 생성자 {} 안에서 멤버데이터에 값을 넣는 코드의 오버헤드
	Person1(const std::string& n, int a)
	{
		// call std::string::string() <= name 객체의 디폴트 생성자 호출

		name = n;	// name.operator=(n) 이라는 대입 연산자 호출
					// 즉, 2번의 함수 호출로 name 에 값을 넣은것
					// 초기화가 아닌 대입. 
		age = a;
	}
};

Person1 p("kim", 20);
//-------------------------------------------


class Person2
{
	std::string name;
	int age;
public:
	// 멤버 초기화 리스트를 사용 하면
	Person2(const std::string& n, int a) : name(n), age(a)
	{
		// call std::string::string(n) 으로 생성자를 호출해 달라는 것
		// 즉, 1번의 함수 호출로 name 에 값을 넣은 것

	}
};

Person2 p("kim", 20);

int main()
{

}




