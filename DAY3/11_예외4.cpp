#include <iostream>

// ���� ���� Ŭ���� �����

class file_not_found_error
{
	// �������Ÿ/�Լ� ���� ����ؼ�
	// ������ ������ �˷��ݴϴ�.
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
		std::cout << "���� �߻�\n";
	}
	catch (const disconnect_wifi_error& e)
	{
		std::cout << "���� �߻�\n";
	}
	catch (...) // ������ ������ ���� ��� ������ ����ó��.
	{
		
	}
	db_remove();
}
// �׷���, ���ܴ�
// throw e;    // e��� ��ü�� ���� ���纻 ���� catch �� ����
//             // �̷����󶧹��� ������尡 �ֽ��ϴ�.

// �׷���
// �ɰ��� ���� ó�� : ���� ����
// ������ ���� ó�� : ��ȯ������ ó��.