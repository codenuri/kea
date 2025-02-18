#include <iostream>

// �� ���� ��¥���� �˾ƾ� Date ���� �پ��� ������ �����մϴ�.
// => �����Ҷ� �Ʒ� ����Ÿ �°� ä�켼��. 
//int days[12] = { 31, 28, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30 };

class Date
{
private:
	int year;
	int month;
	int day;
	
	// �Ʒ� ó���ϸ� ��� ��¥ ��ü�� ���� 12�� �迭�� ������ �˴ϴ�
//	int days[12] = { 31, 28, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30 };

	// ���� ��¥���� ��� ��¥ ��ü�� �����ϸ� �˴ϴ�.
	static const int days[12];

public:
	Date(int year, int month, int day)
		: year{ year }, month{ month }, day{ day }
	{
	}
	int get_month() const { return month; }
	void set_month(int m) { if (m < 13 && m > 0) month = m; }

	// ���� Date Ÿ�� ����ڵ��� ���ϰ� ����Ҽ� �ִ�
	// �پ��� ��� �Լ��� �����ϸ� �˴ϴ�

	Date after_days(int ds)
	{
		Date tmp(year, month, day + ds); // �߸��� ����, 
										// �����Ҷ� ����� ������ ������
										// days �����ؼ� �غ�����
		return tmp;
	}
};
const int Date::days[12] = { 31, 28, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30 };


int main()
{
	Date d(2025, 2, 18);

	Date d2 = d.after_days(1000);

}