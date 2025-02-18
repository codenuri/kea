#include <iostream>

// 방법 #3. static member data
// => 모든 멤버 데이타가 공유하는 멤버이므로
// => 객체 갯수 파악 성공
// => private 에 보호 할수도 있다.


class Car
{
	int color;
	int speed;
public:
//	int count = 0;		// 객체당 한개씩 만들어 지는 멤버 데이타
	static int count;	// 모든 Car 객체가 공유하는 멤버 데이타
						// 1. 클래스안에 선언을 만들고
						// 2. 클래스 외부에 정의를 만들면서 초기화 한다.

	Car() { ++count; }
	~Car() { --count; }
};

int Car::count = 0;


int main()
{
	Car c1;
	Car c2;
		
	// static 멤버 데이타는 "클래스이름::" 로 접근하면 됩니다.
	std::cout << Car::count << std::endl;
}

