// 6_정적멤버6.cpp

#include <iostream>

// 프로그램에서 "날짜" 를 많이 사용하게 된다.
// => "Date" 타입을 만들자

class Date
{
	// #1. 멤버 데이타
private:
	int year;
	int month;
	int day;
public:
	// #2. 생성자
	Date(int year, int month, int day)
		: year{ year }, month{ month }, day{ day }
	{
	}
	// #3. setter/getter
	int get_month() const { return month; }
	void set_month(int m) { if (m < 13 && m > 0) month = m; }
	// 복습할때 day, year 도 setter/getter 만들어 보세요
};

int main()
{
	Date d(2025, 2, 18);

}