#include <iostream>

// ���� ���� Ű���� 3��
// throw : ���� ������

// try ~ catch : ���� ���

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
		std::cout << "���� �߻�\n";
		// ������ ���ܿ� ���� ������ �ذ��Ҽ� ���ٸ�
		// ����ڿ��� �˸��� �����ϼ���
		// std::exit(-1);

		// ���� ���� ������ ���α׷��� ��� ����ɼ� �ֽ��ϴ�.
	}

	db_remove();
}
