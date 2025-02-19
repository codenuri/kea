// 3_추상클래스 - 156p ~

// 추상 클래스 : 순수 가상함수가 한개 이상 있는 클래스
// 특징 : 객체를 만들수 없다.
// 의도 : 약속된 함수를 반드시 구현하라고 지시 하는 것. 
class Shape
{
public:
	virtual void Draw()  = 0; // 순수 가상함수(pure virtual function)
							  // => 구현이 없고, "= 0" 으로 표기
};

class Rect : public Shape
{
public:
	// Draw() 의 구현부를 제공하지 않으면 Rect 도 추상입니다.
	// Draw() 의 구현부를 제공하면        Rect 는 추상아님.
	void Draw() override {}
};

int main()
{
	Shape s; // error
	Rect  r; // ok
}


