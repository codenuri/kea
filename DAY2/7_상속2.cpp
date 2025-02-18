// 5_상속2

// C++의 접근 지정자는 3개 입니다.
// => private, public 그리고 protected(상속에서만 사용)

class Base
{
private:	// 자신의 멤버 함수만 접근 가능
	int a;	

protected:  // 자신의 멤버 함수와 파생 클래스 멤버함수에서 접근 가능
	int b;	

public:		// 어디서도 접근 가능
	int c;	
};

int main()
{
	Base base;
	base.a = 0; // error  private
	base.b = 0; // error  protected
	base.c = 0; // ok
}


class Derived : public Base
{
public:
	// Derived 는 Base 에게서 "a, b, c" 를 물려 받습니다
	void foo()
	{
		a = 0;	// 기반 클래스의 private 은 파생클래스라도 접근 안됩니다
				// 접근하려면 "set_a()" 등의 기반클래스가 제공하는 함수 사용. 
		
		b = 0;	// ok

		c = 0;	// ok 
	}
};