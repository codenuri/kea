#include <iostream>


// �߻�Ŭ���� �� �������̽� �� �ణ ȥ��ǰ� �ϴµ�, �Ʒ� ���� �����ϼ���

// �������̽� : ���Ѿ��ϴ� ��Ģ(���� �����Լ�)�� �ִ� ���
// �߻�Ŭ���� : ���Ѿ��ϴ� ��Ģ(���� �����Լ�) + �ٸ� ���

// C#, Java : interface, abstract ��� ������ Ű���尡 ����
// �׷���, C++�� �̷� Ű���� ����, ���� ���������Լ��� �߻�Ŭ���� ������ ����
//---------------------------------------------------------------------

// ī�޶� ����ڿ� ī�޶� �����ڰ� ���Ѿ��ϴ� ��Ģ�� ���� �����մϴ�.

// ��Ģ : "��� ī�޶�� �Ʒ� Ŭ������ ���� �Ļ� �Ǿ�� �Ѵ�." �� ǥ������ ����!!
//        "��� ī�޶�� �Ʒ� �������̽��� �����ؾ� �Ѵ�." ��� ǥ���մϴ�.

// �������̽� ���鶧 class �� �ص� ������ struct �� �� ��ȣ �˴ϴ�.
// => public ���� ������ ���� �����ϰ�
// => ��� ���� public �̶�� �ǹ̰� �ֱ� ������.. 

//class ICamera
struct ICamera
{
//public:
	virtual void take() = 0;
	virtual ~ICamera() {}	// �������̽��� �ᱹ ��� Ŭ���� 
							// ��� Ŭ���� �Ҹ��ڴ� �����Լ� �̾�� �Ѵ�.
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

	UHDCamera uhc;		// ���߿� ���ο� ���(ī�޶� Ŭ����)�� �߰��Ǿ�����
	p.use_camera(&uhc);	// People �� �������� �ʾƵ� ��밡���ϴ�.
						// => ��Ģ(�������̽�)�� ���� �����߱� ������
}


