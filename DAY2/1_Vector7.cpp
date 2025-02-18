// vector7.cpp - 5�� ����

#include <iostream>


// C++���� Ŭ������ ����� 2���� ���

// #1. Ŭ���� ����ȿ� ��� �Լ� ������ ��� �����ϴ� ���
//	   => ���� Ŭ����(����Լ������� ���� ������ Ŭ����)
// 
// #2. Ŭ���� ����ȿ� ��� �Լ� ���� �����ϰ�
//     ��� �Լ��� ������ Ŭ���� �ܺ�(��κк����� .cpp ����)�� ����


class vector
{
	int* ptr;
	int  sz;

public:
	vector(int size, int value);
	~vector();

	int& at(int idx);
	void resize(int new_size);
	int size();
	bool empty();
};


vector::vector(int size, int value)
{
	sz = size;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
		ptr[i] = value;
}
vector::~vector() { delete[] ptr; }
int& vector::at(int idx) { return ptr[idx]; }
void vector::resize(int new_size)
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


int vector::size() { return sz; }

bool vector::empty() { return sz == 0; }





int main()
{
	vector v(5, 0);
	v.at(0) = 10;

	v.resize(10);

	std::cout << v.at(0) << std::endl; // 10

	std::cout << v.size() << std::endl;

}