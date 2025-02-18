// 6_�������6.cpp

#include <iostream>

// ���α׷����� "��¥" �� ���� ����ϰ� �ȴ�.
// => "Date" Ÿ���� ������

class Date
{
	// #1. ��� ����Ÿ
private:
	int year;
	int month;
	int day;
public:
	// #2. ������
	Date(int year, int month, int day)
		: year{ year }, month{ month }, day{ day }
	{
	}
	// #3. setter/getter
	int get_month() const { return month; }
	void set_month(int m) { if (m < 13 && m > 0) month = m; }
	// �����Ҷ� day, year �� setter/getter ����� ������
};

int main()
{
	Date d(2025, 2, 18);

}