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
		if (new_size > sz) // 크기가 커지는 경우
		{
			// #1. 요청한 크기 만큼 새롭게 메모리 할당
			int* tmp = new int[new_size];

			// #2. 기존 버퍼의 내용을 새로운 버퍼(메모리)에 복사
			memcpy(tmp, ptr, sizeof(int) * sz);

				// => ptr 이 "가리키는 메모리" 내용을
				// => tmp 가 "가리키는 메모리" 로
				// => sizeof(int)* sz 만큼 복사

			// #3. 기존 버퍼 제거
			delete[] ptr;

			// #4. 멤버 데이타 ptr 이 새로운 메모리를 가리키도록
			ptr = tmp;

			// #5. sz 멤버데이타 수정
			sz = new_size;
		}
		else
		{
			// 작아지는 것을 복습할때 해보세요..
			// 최선의 선택이 뭘지 생각해 보세요 - 3일차 std::vector 배울때 설명
		}

	}
};






int main()
{
	vector v(5, 0);
	v.at(0) = 10;
	std::cout << v.at(0) << std::endl;


	v.resize(10); 
}