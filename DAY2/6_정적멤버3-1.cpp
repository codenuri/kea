#include <iostream>


class Car
{
	int color;
	int speed;
public:
	static int count;	

	Car() { ++count; }
	~Car() { --count; }
};

int Car::count = 0;

// static 멤버 데이타의 특징(의미)
// 1. 클래스 외부 정의가 결국 "Car 전용 전역변수"를 만드는 코드이므로
//    Car 의 객체가 한개도 없어도 "Car::count" 는 메모리에 있다 - 전역변수와 동일

// 2. Car 객체를 만들면, non-static 멤버만 객체의 메모리 공간에 있게 됩니다

int main()
{
	// 객체가 없어도 Car::count 는 메모리에 있으므로
	// 객체 없이 아래 처럼 접근하면됩니다.
	std::cout << Car::count << std::endl; // 0

	Car c1;
	Car c2;

	std::cout << Car::count << std::endl; // 2


	// #3. C++에서 static 멤버 데이타 접근 방법은 2개 입니다(public 일때)
	//  1. 클래스 이름으로 접근 : Car::count
	//  2. 객체   이름으로 접근 : c1.count

	std::cout << Car::count << std::endl;
	std::cout << c1.count << std::endl;
	std::cout << c2.count << std::endl;	// c1.count 와 같은 메모리 접근

	// 권장 : 클래스 이름으로 접근하세요. 가독성이 좋습니다.
	// => java, C# 등의 다른 언어는 "클래스이름으로만 접근" 가능
}

