// 7_가상함수2.cpp  147 page ~

class Shape
{
public:
	virtual void Draw() {};
	virtual void Clone() const {};
	virtual void Move() {};
};
// 가상함수 문법 정리
class Rect : public Shape
{
public:
	// #1. 가상함수재정의시 virtual 은 있어도 되고 없어도 됩니다.
//	virtual void Draw() {};
//	void Draw() {};


	// #2. 가상함수를 재정의시 실수(오타)가 있어도
	// => 에러가 아닙니다.
	// => 파생 클래스가 다른 함수를 만들었다고 컴파일러가 생각합니다.
	// => 이런 현상이 많은 버그의 원인이 되었습니다
//	virtual void draw()  {};
//	virtual void Clone() {};
//	virtual void Move(int n) {};
	

	// #3. 그래서 C++11 부터 "override" 라는 키워드 도입
	// => 컴파일러에게 기반 클래스 가상함수를 오버라이드 한다고 알리는 것
	// => override 를 붙이면 앞에 virtual 은 없어도 가독성이 나쁘지 않습니다.
	virtual void draw()  override {};
	virtual void Clone() override {};
	virtual void Move(int n) override {};
};


int main()
{

}


// github.com/codenuri/kea   에서  DAY3.zip 받으시면 됩니다.

