#include <iostream>


// 추상클래스 와 인터페이스 용어가 약간 혼용되곤 하는데, 아래 같이 생각하세요

// 인터페이스 : 지켜야하는 규칙(순수 가상함수)만 있는 경우
// 추상클래스 : 지켜야하는 규칙(순수 가상함수) + 다른 멤버

// C#, Java : interface, abstract 라는 각각의 키워드가 존재
// 그런데, C++은 이런 키워드 없고, 오직 순수가상함수와 추상클래스 문법만 존재
//---------------------------------------------------------------------

// 카메라 사용자와 카메라 제작자가 지켜야하는 규칙을 먼저 설계합니다.

// 규칙 : "모든 카메라는 아래 클래스로 부터 파생 되어야 한다." 로 표현하지 말고!!
//        "모든 카메라는 아래 인터페이스를 구현해야 한다." 라고 표현합니다.

// 인터페이스 만들때 class 로 해도 되지만 struct 가 더 선호 됩니다.
// => public 접근 지정자 생략 가능하고
// => 모든 것이 public 이라는 의미가 있기 때문에.. 

//class ICamera
struct ICamera
{
//public:
	virtual void take() = 0;
	virtual ~ICamera() {}	// 인터페이스는 결국 기반 클래스 
							// 기반 클래스 소멸자는 가상함수 이어야 한다.
};





// 실제 카메라 제품은 없지만 규칙이 있습니다.
// 사용하는 코드를 먼저 만들어도 됩니다.
// => 규칙대로만 사용하면 된다.

class People
{
public:
	void use_camera(ICamera* c) { c->take(); }
				// 추상 클래스는 객체를 만들수 없지만
				// 포인터는 만들수 있습니다
};

// 이제 모든 카메라 제조사는 규칙을 지켜야 합니다
class Camera : public ICamera
{
public:
	void take() { std::cout << "take picture" << std::endl; }
};

class HDCamera : public ICamera
{
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};

class UHDCamera : public ICamera
{
public:
	void take() { std::cout << "take UHD picture" << std::endl; }
};

int main()
{
	People p;

	Camera c;
	p.use_camera(&c);

	HDCamera hc;
	p.use_camera(&hc);

	UHDCamera uhc;		// 나중에 새로운 요소(카메라 클래스)가 추가되었지만
	p.use_camera(&uhc);	// People 을 수정하지 않아도 사용가능하다.
						// => 규칙(인터페이스)를 먼저 설계했기 때문에
}


