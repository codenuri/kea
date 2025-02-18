#include <iostream>
#include <vector>

class People
{
	std::string name;
	int age;
public:
	People(const std::string& name, int age)
		: name{ name }, age{ age }
	{
	}
};

// 아래 주석대로 해보세요
// 1. People 로 부터 상속받은 Student 를 만들어 보세요
// 2. Student 에 int id 멤버 데이타 추가해 보세요
// 3. Student 에 생성자 추가해 보세요  <== 핵심
// 4. main 에서 Student 객체 생성해 보세요

class Student : public People
{
	int id;
public:
	/*
	// 아래 처럼 만들면 에러 입니다.
	Student(int id) : id{ id }
	{
		// call People::People() <= 컴파일러가 이렇게 추가했는데
								//  People 에는 디폴트 생성자가 없습니다.
	}
	*/

	// 해결책 : 
	// 1. 파생 클래스 만들때 기반 클래스의 디폴트 생성자가 없다는 것을 알고 있어야 합니다.
	// 2. 기반 클래스 생성자 모양도 정확히 알고 있어야 합니다.
	// 3. 파생 클래스 생성자에서 기반 클래스의 유효한 생성자를 명시적으로 호출해야 합니다.

	// 아래 코드를 완벽히 이해 해야 합니다.
	Student(const std::string& name, int age, int id)
		: People{ name, age }, id{ id }
	{

	}
};

int main()
{
	Student s("kim", 20, 99);

	People p1("kim", 30); 
}













