#include <iostream>

// C++ 표준의 std::vector 와 유사한 클래스(타입)을 설계해 봅시다.

// 객체지향 : 필요한 타입을 먼저 설계 하자.!!

// vector : 크기 변경이 가능한 배열
// => 크기를 변경하려면 기존 메모리 제거후 새롭게 할당할수밖에 없다.
// => 동적메모리 할당이 필요
// => 멤버 데이타는 포인터 한개와 할당된 메모리 크기 관리

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
	// 소멸자 함수 : 객체가 파괴 될때 호출되는 함수
	//			    생성자에서 동적 메모리 할당을 한경우
	//				소멸자에서 메모리 해지를 하는 것이 관례
	//              소멸자는 필요한 경우만 만들면 되는데..
	//				이클래스 처럼 생성자에서 자원 할당한 경우
	//				자원 반납을 위해서 소멸자를 만들게 됩니다.
	~vector() { delete[] ptr; }
};

int main()
{
	vector v(5, 0); // 크기가 5인 동적 배열

//	v.resize(10); // 크기를 10으로!
}