// 4_STL_컨테이너1.cpp
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	v.resize(3); // 어떻게 만들었을까요 ?		
				 // 핵심 : 크기가 줄어들때 입니다.

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 3, 5

}