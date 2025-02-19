#include <iostream>

// 객체지향 언어에서 사용하는 오류 처리 기술이 "예외" 를 사용하면

// 1. 함수가 실패시 "예외" 를 던집니다.
// 2. 던져진 예외를 처리하지 않으면 프로그램을 더이상 실행되지 않고, 비정상종료됩니다.

int db_backup()
{
	if (1)
		throw 1;	// 예외 던지기

	return 100;
}
void db_remove() { std::cout << "db remove\n"; }

int main()
{
	int ret = db_backup();

	db_remove();
}
