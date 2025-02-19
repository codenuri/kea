#include <iostream>







// 카메라 사용자와 카메라 제작자가 지켜야하는 규칙을 먼저 설계합니다.

// 규칙 : 모든 카메라는 아래 클래스로 부터 파생 되어야 한다.

class ICamera
{
public:
	virtual void take() = 0;
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

int main()
{
	People p;

	Camera c;
	p.use_camera(&c);

	HDCamera hc;
	p.use_camera(&hc);

}


