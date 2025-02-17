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

	// 즉, 한개의 연산자가 3가지 다른 의미로 사용되는것
}



