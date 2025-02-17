// 3_변수5
// 30 page ~

// C 언어에서 타입의 별명을 만드는 코드.
typedef int DWORD;
typedef void(*PF)();

// C++ 에서는 typedef 를 계속사용해도 되고
// 아래 처럼해도 됩니다.
// C++11 using alias 라는 문법
using DWORD = int;
using PF = void(*)();

// typedef : 타입의 별명 만 만들수 있습니다.
// using   : 타입의 별명 + "템플릿" 의 별명 도 만들수 있습니다.

int main()
{
	DWORD n;	// int n
	PF    f;	// void(*f)()
}

