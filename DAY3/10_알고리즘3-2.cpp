#include <iostream>
#include <vector>
#include <list>
#include <algorithm>


bool foo(int n) { return n % 3 == 0; }

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	int k = 3; // 사용자가 입력한 값이라고 가정합니다.

	// 주어진 구간에서 "사용자가 입력한 k" 의 배수를 찾고 싶다.

	auto ret1 = std::find(v.begin(), v.end(), foo);
							// => 이 방법으로 하면 일반함수 foo 에서 
							//    main 의 지역변수 k를 사용할수 없습니다.


	// 람다표현식에서는 main 의 지역변수에 접근 가능합니다.
	// => 지역변수 캡쳐 라는 기능
	// => 람다 표현식안에서 자신의 outer function(main) 의 지역변수 에 접근하는 능력
	auto ret2 = std::find(v.begin(), v.end(), [k](int n) { return n % k == 0; });


}