class Test
{
	const int c; // 상수는 반드시 초기화 되어야 합니다.
				 // 아래 생성자에서 c 를 a 값으로 초기화 해보세요
public:
	Test(int a) : c(a)	// c{a} 도 가능
	{
//		c = a;	// 컴파일 에러.. 이 코드는 초기화가 아닙니다.
				// 대입(assignment) 입니다.
				// 상수는 대입될수 없습니다.
				// 초기화 하려면, "멤버 초기화 리스트" 에서 해야 합니다.
	}
};

int main()
{
	Test t(10);
}