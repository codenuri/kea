#include <iostream>

// 각 월별 날짜수를 알아야 Date 관련 다양한 연산이 가능합니다.
// => 복습할때 아래 데이타 맞게 채우세요. 
//int days[12] = { 31, 28, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30 };

class Date
{
private:
	int year;
	int month;
	int day;
	
	// 아래 처럼하면 모든 날짜 객체가 각각 12개 배열을 가지게 됩니다
//	int days[12] = { 31, 28, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30 };

	// 월별 날짜수는 모든 날짜 객체가 공유하면 됩니다.
	static const int days[12];

public:
	Date(int year, int month, int day)
		: year{ year }, month{ month }, day{ day }
	{
	}
	int get_month() const { return month; }
	void set_month(int m) { if (m < 13 && m > 0) month = m; }

	// 이제 Date 타입 사용자들이 편리하게 사용할수 있는
	// 다양한 멤버 함수를 제공하면 됩니다

	Date after_days(int ds)
	{
		Date tmp(year, month, day + ds); // 잘못된 구현, 
										// 복습할때 제대로 구현해 보세요
										// days 참고해서 해보세요
		return tmp;
	}
};
const int Date::days[12] = { 31, 28, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30 };


int main()
{
	Date d(2025, 2, 18);

	Date d2 = d.after_days(1000);

}