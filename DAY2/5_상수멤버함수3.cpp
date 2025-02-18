// vector5������
#include <iostream>

class vector
{
	int* ptr;
	int  sz;
public:
	vector(int size, int value)
	{
		sz = size;
		ptr = new int[size];
		for (int i = 0; i < size; i++)
			ptr[i] = value;
	}

	~vector() { delete[] ptr; }

	int& at(int idx) { return ptr[idx]; }

	void resize(int new_size)
	{
		if (new_size > sz)
		{
			int* tmp = new int[new_size];

			memcpy(tmp, ptr, sizeof(int) * sz);
			delete[] ptr;
			ptr = tmp;
			sz = new_size;
		}
		else
		{
		}
	}
	
	// �Ʒ� ��� �Լ����� ���������� ��� ����Ÿ�� �������� �ʽ��ϴ�.
	// "�ݵ��" const member function �� �Ǿ�� �մϴ�.
	int size() const { return sz; }

	bool empty() const { return sz == 0; }
};

int main()
{
	vector v(5, 0);
	v.at(0) = 10;

	v.resize(10);

	std::cout << v.at(0) << std::endl; // 10

	std::cout << v.size() << std::endl;

}