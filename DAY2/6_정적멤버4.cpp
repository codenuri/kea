#include <iostream>

class Car
{
	int color;
	int speed;

	static int count;
public:	
	Car() { ++count; }
	~Car() { --count; }

	
//	int get_count() const { return count; }	// 멤버 함수는 객체가 있어야 호출가능
											// c1.get_count() 처럼 사용해야 하므로
											// c1 같은 객체가 있어야 합니다.

	static int get_count() { return count; } // static member function
											// 객체 없이도 호출가능한 멤버 함수
											// "Car::get_count()" 로 호출
};

int Car::count = 0;


int main()
{
	std::cout << Car::get_count() << std::endl; // 0

	Car c1;
	Car c2;

	// static 멤버 함수도 "객체이름" 또는 "클래스이름" 으로 호출가능하지만 
	// 클래스 이름 권장
	std::cout << c1.get_count() << std::endl; // 2 ok.. 권장 안함
	std::cout << Car::get_count() << std::endl; // ok. 권장
}

