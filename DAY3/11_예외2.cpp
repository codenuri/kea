#include <iostream>

// ��ü���� ���� ����ϴ� ���� ó�� ����� "����" �� ����ϸ�

// 1. �Լ��� ���н� "����" �� �����ϴ�.
// 2. ������ ���ܸ� ó������ ������ ���α׷��� ���̻� ������� �ʰ�, ����������˴ϴ�.

int db_backup()
{
	if (1)
		throw 1;	// ���� ������

	return 100;
}
void db_remove() { std::cout << "db remove\n"; }

int main()
{
	int ret = db_backup();

	db_remove();
}
