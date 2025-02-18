// 상수 멤버 함수는 선택이 아닙니다. 필수 입니다.

// => 객체의 상태를 변경하지 않는(멤버 데이타 수정하지 않은)
// => 모든 멤버 함수는 반드시 상수 멤버 함수로 해야 합니다.
// => getter(getxxx, 멤버데이타의 값을 얻는)는 반드시 상수 멤버함수로해야 합니다


class Rect
{
	int x, y, w, h;
public:
	Rect(int a, int b, int c, int d)
		: x(a), y(b), w(c), h(d) {}

//	int getArea()       { return w * h; }	// 나쁜 코드가 아닌 틀린 코드
											// 절대 이렇게 하면 안됩니다.
	int getArea() const { return w * h; }	// 이렇게 해야 합니다.
};


//void foo(Rect r)			// call by value : 복사본의 오버헤드가 있습니다.
void foo( const Rect& r)	// const reference 가 좋은 코드 
{
	int n = r.getArea(); // ?
}

int main()
{
	Rect r(1, 1, 10, 10);	// r 은 상수 객체 아님
		
	int n = r.getArea();	// ok. 
	
	foo(r);
}



