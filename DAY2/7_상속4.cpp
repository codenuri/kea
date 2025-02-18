#include <iostream>

// 아래 코드에서 에러를 모두 찾아 보세요
// => 몇번째 라인에서 왜 에러인지 정확히 이해해 보세요
// => 힌트 : Base에 디폴트 생성자가 없습니다.
class Base
{
public:
	Base(int a) { }
	~Base()     { }
};

class Derived : public Base
{
public:
	/*
	Derived()
	{
		// call Base::Base() <= 컴파일러가 추가한 코드
		//						그런데, Base에는 디폴트 생성자가 없으므로 error
	}
	Derived(int a) 
	{	
		// call Base::Base() <= 컴파일러가 추가한 코드
	}
	*/

	// 상속 문법 사용시
	// => 기반 클래스에 디폴트 생성자가 없다면
	// => 파생 클래스의 생성자에서 기반 클래스 다른 생성자를 명시적으로 호출해야 합니다
	// => 초기화 리스트 문법
	Derived()      : Base(0) {}
	Derived(int a) : Base(a) {}
};

int main()
{
}




