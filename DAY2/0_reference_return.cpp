// 1. github.com/codenuri/kea  에서  DAY2.zip 받으시면 됩니다.
// 2. 압축 풀고 visual studio 에서 open 하세요
// 3. 0_reference_return.cpp   추가해 보세요

int x = 3;

// 아래 2개의 함수를 생각해 봅시다.
int  f1() { return x; }
int& f2() { return x; }

int main()
{
	f1() = 10;
	f2() = 10;
}