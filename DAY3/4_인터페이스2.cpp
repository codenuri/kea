#include <iostream>







// ī�޶� ����ڿ� ī�޶� �����ڰ� ���Ѿ��ϴ� ��Ģ�� ���� �����մϴ�.

// ��Ģ : ��� ī�޶�� �Ʒ� Ŭ������ ���� �Ļ� �Ǿ�� �Ѵ�.
class ICamera
{
public:
	virtual void take() = 0;
};











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
	void use_camera(Camera* c) { c->take(); }
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


