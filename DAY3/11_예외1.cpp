#include <iostream>
// 176 page ~ 

// 함수는 다양한 이유로 실패할수 있습니다.

// C 언어 : 실패로 약속한 값(보통 -1, 0)을 반환해서 실패했다는 사실을 호출자에 전달

// 단점 1. 반환값과 실패의 전달이 분리되지 않는다.
// => -1이 연산의 결과인지, 실패인지 모호할수 있다.

// 단점 2. 실패에 대한 처리를 반드시 해야 한다고 강제할수 없다.
//		=> 함수가 실패 했음에도, 실패에 대한 처리를 하지않고
//		   다음작업을 수행하면 더욱 큰 문제가 발생할수 있습니다.

int db_backup()
{
	if (실패)
		return -1;

	return 100;
}
void db_remove() {}

int main()
{
	int ret = db_backup();

	if (ret == -1) {}

	db_remove();
}
