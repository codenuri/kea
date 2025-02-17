#include <iostream>

// 객체지향 프로그래밍의 핵심 #2.
// => 타입을 만들때 "상태를 나타내는 데이타" 와 "상태를 가지고 연산을 수행하는 함수"
//    를 묶어서 타입을 만들자.

// C   언어 구조체 문법 : 함수를 넣을수 없다.
// C++ 언어 구조체 문법 : 함수를 넣을수 있다.

// 구조체 안에 함수를 넣어서 얻는 장점이 뭡니까 ?
// 1. 사각형 관련 함수가 별도의 데이타를 전달 받지 않아도 된다.(코드간결)
// 2. 사용자 코드도 가독성이 좋아진다.
// 3. 다형성, 캡슐화, 상속, 접근지정자등 많은 객체지향 문법을 사용해서
//    사용하기 쉽고, 안전한 타입을 만들수 있다.

struct Rect
{
	// 멤버 데이타 라고 합니다. (다른 객체지향 언어는 "필드" 라는 용어 사용)
	int left;
	int top;
	int right;
	int bottom;

	// 구조체안의 함수를 멤버 함수라고합니다.(다른 언어에서는 "메소드" 라고 합니다)
	int getArea()
	{
		return (right - left) * (bottom - top);
	}
	void draw()
	{
		std::cout << "draw rect" << std::endl;
	}
};
int main()
{
	Rect r = { 1,1,10,10 };

	int n1 = r.getArea();
	r.draw();

//	int n1 = getRectArea(r);
//	drawRect(r);

}