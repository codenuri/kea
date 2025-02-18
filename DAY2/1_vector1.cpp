// github.com/codenuri/kea    DAY2.zip
#include <iostream>
#include <vector>

// C++ 은
// 1. 타입을 만드는 클래스 문법을 제공하고
// 2. class 문법으로 미리 만들어진 많은 타입을 제공한다.
//    => STL 이라고 합니다.
//    => Standard Template Library

int main()
{
	// 배열은 생성한 이후에는 크기를 변경할수 없다.
	int x[5] = { 1,2,3,4,5 };

	// C++ 표준의 std::vector 는 사용법은 배열과 유사하고
	// 크기를 변경할수 있다.
	std::vector<int> v = { 1,2,3,4,5 };
	
	v[0] = 10;
	v.resize(10);
}





