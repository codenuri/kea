//  교재 6 page
#include <stdio.h>
// namespace 개념
// => 프로그램의 구성요소를 논리적으로 분리해서 관리하는 것
// => 이름 충돌을 막을수 있다.
namespace Audio
{
	void init() { printf("Audio init\n"); }
}

namespace Video
{
	void init() { printf("Video init\n"); }
}

// global namespace 
void init() { printf("global init\n"); }

int main()
{
	Audio::init();
	Video::init();
	init(); // global namespace 
}

