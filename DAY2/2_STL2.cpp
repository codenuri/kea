#include <iostream>
#include <cstring> // C ����� <string.h> �� C++ ����, strcmp ���� ���ڿ� �Լ�
#include <string>  // std::string

int main()
{
	// C ��� ���ڿ� ó���� �ʹ� �����մϴ�.
	char cs1[] = "abcd";
	char cs2[] = "abcd";
	
//	if ( cs1 == cs2 ) {} // ����, ���ڿ� �񱳰� �ƴ� �迭�� �ּ� ��
	if (strcmp(cs1, cs2) == 0) {} // ���ڿ� �� �Լ� ����ؾ� �մϴ�.


	// C++ �� std::string Ŭ������ �̹� �����˴ϴ�.
	// ���ڿ��� ������ ������ �����ϰ� ��밡���մϴ�.
	std::string s1 = "abcd";
	std::string s2 = "abcd";

	if (s1 == s2) {}

	std::string s3 = s1 + s2;
	
	s1 = s2;

	// ���� ��� �Լ��� ���� �ֽ��ϴ�.
	std::cout << s1.size() << std::endl; // 4
}