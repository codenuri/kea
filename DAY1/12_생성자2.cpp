// 5_생성자1.cpp
#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int  age;
public:
	// 생성자
	// 1. 클래스 이름과 동일한 함수
	// 2. 반환 타입이 없고, 값을 반환할수 없다.
	// 3. 인자는 있을수도 있고, 없을수도 있다. - 2개이상 만들수있다.
	// 4. 객체 생성시 생성자가 호출된다.
	Person(const std::string& n, int a)
	{
		std::cout << "생성자 호출됨" << std::endl;
		name = n;
		age = a;
	}	
	Person()
	{
		name = "unknown";
		age = 0;
	}
	// 소멸자 : "~클래스이름" 모양의 함수
	//			반환값과 인자가 없다. 오직 한개만 만들수 있다.
	//		    객체가 파괴 될때 호출.
	~Person() { std::cout << "소멸자" << std::endl; }
};
int main()
{
	Person p1("kim", 28); 
	Person p2;

} //<== p2, p1 파괴. 소멸자 호출됨



