#include <iostream>

// 클래스를 만들지 말고
// 클래스를 만드는 "틀(template)" 으로 하는 것이 좋습니다.


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
//	vector v(5, 0);	// 함수 템플릿은 타입인자 생략시 함수 인자로 타입결정되지만
					// 클래스 템플릿은 반드시 타입인자를 전달해야 합니다.

	vector<int>    v(5, 0);
	vector<double> v1(4, 1.1);

	v.at(0) = 10;

	v.resize(10);

	std::cout << v.at(0) << std::endl;

	std::cout << v.size() << std::endl;

}