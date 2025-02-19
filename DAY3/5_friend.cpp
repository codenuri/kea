#include <iostream>

// friend   79p ~

class Bike
{
	int gear = 0;
public:
//	void setGear(int n) { gear = n; }


	// friend 함수
	// => 멤버 함수는 아니지만 private 에 접근할수 있다.

	// 1. setter/getter 를 만들어서 접근하면되지 않나요 ?
	// => setter/getter 를 만드는 것은 모두에게 접근기회를 부여 한것
	// => 한개의 함수에게만 접근 권한을 부여 한것

	// 2. 멤버 함수로 만들면 되지 않나요 ?
	// => 멤버 함수로 만들수 없을때가 있습니다.(연산자 재정의 등에서)

	// 3. private 을 외부에서 접근가능하게 하는 것이므로
	//    객체지향 관점에서는 나쁜거 아닌가요 ?
	// => 맞습니다. 그래서 C++외의 대부분의 언어에는 이 문법이 없습니다.
	// => C++ 언어에서만 볼수 있는 문법입니다.

	friend void fixBike(Bike& b);
};



void fixBike(Bike& b)
{
	b.gear = 10;
}

int main()
{
	Bike b;
	fixBike(b);
}