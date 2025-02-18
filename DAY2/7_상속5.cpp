#include <iostream>
#include <vector>

class People
{
	std::string name;
	int age;
public:
	// 항상 생성자를 통해서 멤버 데이타를 초기화 하는 것이 좋은 코드 입니다.
	People(const std::string& name, int age)
		: name{ name }, age{ age }
	{
	}
};

int main()
{

	People p1("kim", 30); // ok. 모든 멤버가 초기화된 안전한 객체!!

//	People p;	// 이렇게 객체를 만드는 것을 허용하는게 좋을까요 ?
				// 멤버 데이타가 초기 화되지 않은 객체..
}










// 1. People 로 부터 상속받은 Student 를 만들어 보세요
// 2. Student 에 int id 멤버 데이타 추가해 보세요
// 3. Student 에 생성자 추가해 보세요
// 4. main 에서 Student 객체 생성해 보세요


