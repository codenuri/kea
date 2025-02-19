#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	// 주어진 구간에서 처음 나오는 "3" 을 찾아라

	auto ret1 = std::find(v.begin(), v.end(), 3);

}