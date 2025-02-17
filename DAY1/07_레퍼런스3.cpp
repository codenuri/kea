struct BigData
{
	int buff[1024];
};

// call by value : 인자의 복사본을 생성합니다
//				   원본을 절대 수정할수 없으므로 안전합니다.
//				   main, foo 는 완전히 독립되었으므로 아주 좋은 코드
void foo(int n) 
{
	n = 200;
}

// 그런데, 인자 타입의 크기가 크다면
// call by value 는 복사본에 의한 메모리 사용량이 증가 합니다.
// 이경우 해결책은 const reference 입니다.
// reference : 복사본의 오버헤드를 없애기 위해
// const     : 원본을 수정할수 없게, 안전성(함수간의 독립성)
// 
// void goo(BigData bd)
void goo(const BigData& bd)
{
	// bd를 사용해서는 변경불가.
}

int main()
{
	BigData b;
	goo(b);


	int x = 100;

	// foo 함수에서 인자의 값을 절대 수정하면 안된다면
	foo(x);
}

// 인자 타입의 크기가 어느 정도 일때까지 call by value 를 사용하나요 ?
// => 보통 CPU 에서 레지스터 한개에 담을 정도 까지는 call by value 권장
// => 64bit CPU 에서는 8바이트(double) 데이타 정도는 call by value 
//    그 이상은 const reference
