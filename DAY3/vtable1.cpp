// vtable1.cpp - 153 page ~ 
// => 154 page 그림 이해 하면 됩니다.
// => 가상함수의 원리

class Animal
{
	int age;
public:
	virtual void cry() {} 
	virtual void run() {}
};

class Dog : public Animal
{
	int color;
public:
	void cry() override {}
};

int main()
{
	Animal a1, a2;
	Dog d1;

	Animal* p = &d1;

	p->cry();	// 가상함수 이므로
				// 1. 실행시간에 p가 가리키는 곳을 조사해서
				// 2. 객체에 종류에 맞게 cry 호출
}

// 핵심 #1. p가 가리키는 곳이 어떤 타입인지 어떻게 조사할까 ?
// => 어떤 타입인지 조사가능하도록 정보가 메모리에 추가되어야 한다.

// 핵심 #2. 어떤 타입인지 알아도 어떻게 함수를 할까 ?
// => 모든 가상함수 주소가 메모리에 보관되어야 한다.
// => 이 부분에서 메모리 오버헤드 발생