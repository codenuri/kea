// vector7.cpp - 5번 복사

#include <iostream>


// C++에서 클래스를 만드는 2가지 방법

// #1. 클래스 선언안에 멤버 함수 구현을 모두 포함하는 방법
//	   => 작은 클래스(멤버함수갯수가 적은 간단한 클래스)
// 
// #2. 클래스 선언안에 멤버 함수 선언만 포함하고
//     멤버 함수의 구현은 클래스 외부(대부분별도의 .cpp 파일)에 구현


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