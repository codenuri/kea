#include <iostream>

// 예외 관련 키워드 3개
// throw : 예외 던지기

// try ~ catch : 예외 잡기

int db_backup()
{
	if (1)			
		throw 1;	

	return 100;
}
void db_remove() { std::cout << "db remove\n"; }

int main()
{
	try
	{
		int ret = db_backup();
	}
	catch (int e)
	{
		std::cout << "예외 발생\n";
		// 던져진 예외에 대한 오류를 해결할수 없다면
		// 사용자에게 알리고 종료하세요
		// std::exit(-1);

		// 종료 하지 않으면 프로그램은 계속 실행될수 있습니다.
	}

	db_remove();
}
