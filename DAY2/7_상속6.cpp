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
// 3. Student 에 생성자 추가해 보세요
// 4. main 에서 Student 객체 생성해 보세요


int main()
{

	People p1("kim", 30); 
}













