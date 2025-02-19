// 3_�߻�Ŭ���� - 156p ~

// �߻� Ŭ���� : ���� �����Լ��� �Ѱ� �̻� �ִ� Ŭ����
// Ư¡ : ��ü�� ����� ����.
// �ǵ� : ��ӵ� �Լ��� �ݵ�� �����϶�� ���� �ϴ� ��. 
class Shape
{
public:
	virtual void Draw()  = 0; // ���� �����Լ�(pure virtual function)
							  // => ������ ����, "= 0" ���� ǥ��
};

class Rect : public Shape
{
public:
	// Draw() �� �����θ� �������� ������ Rect �� �߻��Դϴ�.
	// Draw() �� �����θ� �����ϸ�        Rect �� �߻�ƴ�.
	void Draw() override {}
};

int main()
{
	Shape s; // error
	Rect  r; // ok
}


