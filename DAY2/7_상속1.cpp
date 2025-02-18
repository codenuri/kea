// 5_상속1.cpp   133page ~
#include <iostream>
#include <string>

// 공통의 특징인 "사람" 을 먼저 설계

class Person
{
	std::string name;
	int age;
};

// 상속 : 기존 클래스(타입)을 확장해서 새로운 클래스(타입)을 만드는 문법
// => 공통의 요소를 한곳에서 관리할수 있다.
// => 코드의 중복을 막고, 코드 재사용

class Student : public Person
{	
	int    id;
};

class Professor : public Person
{
	int    major;
};

int main()
{
	Student s;
	Professor p;
}
