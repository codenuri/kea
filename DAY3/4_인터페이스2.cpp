#include <iostream>







// ī�޶� ����ڿ� ī�޶� �����ڰ� ���Ѿ��ϴ� ��Ģ�� ���� �����մϴ�.

// ��Ģ : ��� ī�޶�� �Ʒ� Ŭ������ ���� �Ļ� �Ǿ�� �Ѵ�.

class ICamera
{
public:
	virtual void take() = 0;
};

// ���� ī�޶� ��ǰ�� ������ ��Ģ�� �ֽ��ϴ�.
// ����ϴ� �ڵ带 ���� ���� �˴ϴ�.
// => ��Ģ��θ� ����ϸ� �ȴ�.

class People
{
public:
	void use_camera(ICamera* c) { c->take(); }
				// �߻� Ŭ������ ��ü�� ����� ������
				// �����ʹ� ����� �ֽ��ϴ�
};

// ���� ��� ī�޶� ������� ��Ģ�� ���Ѿ� �մϴ�
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


