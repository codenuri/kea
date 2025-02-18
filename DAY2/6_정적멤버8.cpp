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
		
	// 5월이 몇일까지 있는지 알고 싶다. (2번이 좋다.)
	// #1. 멤버 함수로 제공하자.

//	Date d3(2025, 5, 1);
//	int ds1 = d3.days_in_month();


	// #2. static 멤버 함수로 제공하자.
	int ds2 = Date::days_in_month(5);

	//---------------------------------------------
	// 내일 날짜를 알고 싶다.
	// => static ? non-static
	// => 내일은 "기준날짜" 가 있어야 하는 개념이다.
	// => non-static
	Date d4(2024, 2, 18);
//	Date t = d4.tomorrow();	// 복습할때 구현해 보세요

	// 윤년인지 알고 싶다.
	// 어떻게 만들까요 ?

	Date d5(2025, 2, 7);
	bool b1 = d5.is_leap_year();		// #1
	bool b2 = Date::is_leap_year(2025);	// #2
}