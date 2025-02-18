class Car
{
	int color;
	static int cnt;
public:
	// 다음중 에러를 모두 골라 보세요
	// 핵심 #1. static 멤버 데이타는 "객체가 없어도" 메모리에 존재
	// 핵심 #2. static 멤버 함수는 "객체 없이 호출 가능"
	void foo()
	{
		// 이 함수를 호출했다는 것은 객체가 있다면것 : c1.foo()
		color = 0;	// 1. ok. 객체가 있으므로 color 도 메모리에 있다.
		cnt = 0;	// 2. ok
		goo();		// 3. ok
	}
	static void goo()
	{
		color = 0;	// 4. error. 객체를 생성해야만 메모리에 존재
		cnt = 0;	// 5. ok	 객체가 없어도 메모리에 존재
		foo();		// 6. error  foo 는 객체가 있어야 호출 가능
	}
};
int Car::cnt;

int main()
{
	Car::goo(); // 객체 없이 호출
}

// 정리 
// static member function 에서는 static member(data, function) 만 접근 가능합니다.
