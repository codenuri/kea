#include <iostream>

class Date
{
private:
	int year;
	int month;
	int day;
	static const int days[12];

public:
	Date(int year, int month, int day)
		: year{ year }, month{ month }, day{ day }
	{
	}
	int get_month() const { return month; }
	void set_month(int m) { if (m < 13 && m > 0) month = m; }

	Date after_days(int ds)
	{
		Date tmp(year, month, day + ds);
		return tmp;
	}

	static int days_in_month(int m) { return days[m - 1]; }
};
const int Date::days[12] = { 31, 28, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30 };


int main()
{
	Date d(2025, 2, 18);

	Date d2 = d.after_days(1000);
		
	// 5���� ���ϱ��� �ִ��� �˰� �ʹ�. (2���� ����.)
	// #1. ��� �Լ��� ��������.

//	Date d3(2025, 5, 1);
//	int ds1 = d3.days_in_month();


	// #2. static ��� �Լ��� ��������.
	int ds2 = Date::days_in_month(5);

	//---------------------------------------------
	// ���� ��¥�� �˰� �ʹ�.
	// => static ? non-static
	// => ������ "���س�¥" �� �־�� �ϴ� �����̴�.
	// => non-static
	Date d4(2024, 2, 18);
//	Date t = d4.tomorrow();	// �����Ҷ� ������ ������

	// �������� �˰� �ʹ�.
	// ��� ������ ?

	Date d5(2025, 2, 7);
	bool b1 = d5.is_leap_year();		// #1
	bool b2 = Date::is_leap_year(2025);	// #2
}