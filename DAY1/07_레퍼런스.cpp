// 1_레퍼런스.cpp    58 page ~

#include <iostream>

int main()
{
	int n1 = 10;
		
	// 레퍼런스(referene) : 기존 변수의 별명(alias)를 만드는 문법

	int& r1 = n1;	// 레퍼런스 r1 은 n1 의 또 다른 이름 입니다.

	r1 = 30;	// 결국 n1 에 30을 넣은 것
		
	std::cout << n1  << std::endl; // 30
	
	std::cout << &r1 << std::endl; // 
	std::cout << &n1 << std::endl; // 위와 동일한 주소!


	// #1. & 연산자 주의 하세요
	int   a = 5 & 8; // 이때는 비트 and 연산자

	int* p1 = &a;    // 이때는 주소 연산자
	
	int& r2 = a;	 // 이때는 reference 연산자

	// => 즉, 한개의 연산자가 3가지 다른 의미로 사용되는것


	// #2. 포인터 변수 초기화와 reference 초기화 잘 구별하세요
	int* p3 = &n1; // 포인터 변수는 주소로 초기화
	int& r3 = n1;  // 별명(reference) 만들때는 변수 이름으로 초기화


	// #3. 포인터는 초기값이 없거나 0일수 있지만
	//     reference 는 반드시 초기화 되어야 합니다.
	int* p4;		// ok. 초기값 없음
	int* p5 = 0;	// ok
	int& r5;		// error. 별명이므로 초기값 필요
}



