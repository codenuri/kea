// 4_인터페이스 - 159p~
#include <iostream>

class Camera
{
public:
	void take() { std::cout << "take picture" << std::endl; }
};

class HDCamera
{
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};

class People
{
public:
	void use_camera(Camera* c)   { c->take(); }
	void use_camera(HDCamera* c) { c->take(); }
};

int main()
{
	People p;

	Camera c;
	p.use_camera(&c);

	HDCamera hc;
	p.use_camera(&hc);

}

// 위 코드는 
// 나중에 추가된 "HDCamera" 때문에
// 기존의 코드인 "People" 의 코드가 수정되었습니다.

// OCP 위반 입니다.
// => 안좋은 디자인 입니다.
