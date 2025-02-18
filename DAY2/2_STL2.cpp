#include <iostream>
#include <cstring> // C 헤더인 <string.h> 의 C++ 버전, strcmp 같은 문자열 함수
#include <string>  // std::string

int main()
{
	// C 언어 문자열 처리는 너무 복잡합니다.
	char cs1[] = "abcd";
	char cs2[] = "abcd";
	
//	if ( cs1 == cs2 ) {} // 버그, 문자열 비교가 아닌 배열의 주소 비교
	if (strcmp(cs1, cs2) == 0) {} // 문자열 비교 함수 사용해야 합니다.


	// C++ 은 std::string 클래스가 이미 제공됩니다.
	// 문자열을 정수형 변수와 동일하게 사용가능합니다.
	std::string s1 = "abcd";
	std::string s2 = "abcd";

	if (s1 == s2) {}

	std::string s3 = s1 + s2;
	
	s1 = s2;

	// 편리한 멤버 함수도 많이 있습니다.
	std::cout << s1.size() << std::endl; // 4
}