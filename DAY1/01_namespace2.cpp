// namespace 에 있는 함수는 접근하는 방법 - 8 page
#include <stdio.h>

namespace Audio
{
	void init() { printf("Audio init\n"); }
}

namespace Video
{
	void init() { printf("Video init\n"); }
}

//void init() { printf("global init\n"); }

int main()
{
	// namespace 의 요소 접근 방법
	// #1. 완전한 이름(qualified name)
	Audio::init();

	// #2. using declaration(선언)
	using Audio::init;	// init 은 Audio 이름 없이 사용가능하게 해달라.
	init(); // ok

	// #3. using directive(지시어)
	using namespace Audio; // Audio 의 모든 요소를 Audio 이름없이 
							// 사용하게 해달라.
	init();

	// 단, using 사용시 다시 이름 충돌 가능성이 있습니다.
	// global init 과충돌.
	// => 완전한 이름 권장.
}

