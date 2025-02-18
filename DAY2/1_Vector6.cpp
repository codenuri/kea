#include <iostream>

// Ŭ������ ������ ����
// Ŭ������ ����� "Ʋ(template)" ���� �ϴ� ���� �����ϴ�.


template<typename T>
class vector
{
	T* ptr;
	int  sz;

public:
	vector(int size, T value)
	{
		sz = size;
		ptr = new T[size];

		for (int i = 0; i < size; i++)
			ptr[i] = value;
	}

	~vector() { delete[] ptr; }

	T& at(int idx) { return ptr[idx]; }

	void resize(int new_size)
	{
		if (new_size > sz)
		{
			T* tmp = new T[new_size];

			memcpy(tmp, ptr, sizeof(T) * sz);
			delete[] ptr;
			ptr = tmp;
			sz = new_size;
		}
		else
		{
		}
	}

	int size() { return sz; }

	bool empty() { return sz == 0; }
};

int main()
{
//	vector v(5, 0);	// �Լ� ���ø��� Ÿ������ ������ �Լ� ���ڷ� Ÿ�԰���������
					// Ŭ���� ���ø��� �ݵ�� Ÿ�����ڸ� �����ؾ� �մϴ�.

	vector<int>    v(5, 0);
	vector<double> v1(4, 1.1);

	v.at(0) = 10;

	v.resize(10);

	std::cout << v.at(0) << std::endl;

	std::cout << v.size() << std::endl;

}