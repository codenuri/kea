#include <iostream>

// 예외 전용 클래스 만들기

class file_not_found_error
{
	// 멤버데이타/함수 등을 사용해서
	// 오류의 원인을 알려줍니다.
};
class disconnect_wifi_error
{

};


int db_backup()
{
	if (1)
	{
		file_not_found_error e;
		throw e;
	}
	else if (2)
	{
		disconnect_wifi_error e;
		throw e;
	}

	return 100;
}
void db_remove() { std::cout << "db remove\n"; }

int main()
{
	try
	{
		int ret = db_backup();
	}
	catch (const file_not_found_error& e)
	{
		std::cout << "예외 발생\n";
	}
	catch (const disconnect_wifi_error& e)
	{
		std::cout << "예외 발생\n";
	}
	catch (...) // 위에서 잡히지 않은 모든 종류의 예외처리.
	{
		
	}
	db_remove();
}
// 그런데, 예외는
// throw e;    // e라는 객체를 힙에 복사본 만들어서 catch 로 전달
//             // 이런현상때문에 오버헤드가 있습니다.

// 그래서
// 심각한 오류 처리 : 예외 권장
// 간단한 오류 처리 : 반환값으로 처리.