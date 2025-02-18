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

	// 핵심 : reference 를 반환해야 아래 처럼 사용가능합니다.
	// v.at(0) = 10;

	int& at(int idx) { return ptr[idx] ; }
};

int main()
{
	vector v(5, 0); 

//	v[0] = 10;	// 배열처럼 사용하려면 이렇게 해야 합니다.
				// "연산자 재정의" 라는 기술 필요 - 3일차

	v.at(0) = 10;

	std::cout << v.at(0) << std::endl;

}