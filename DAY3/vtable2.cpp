// 컴파일러는 클래스에 가상함수가 있으면 아래 와 같은 코드를 추가 합니다. 

// #1. 모든 가상함수의 주소를 담는 배열(전역변수)을 만듭니다.
void* animal_vtable[3] = { Animal_TYPE_INFO, &Animal::cry, &Animal::run };
void* dog_vtable[3]    = { Dog_TYPE_INFO,    &Dog::cry,    &Animal::run };


// #2. 가상함수를 가진 모든 클래스에는 자동으로 멤버 데이타가 한개 추가된다
// => 가상함수 테이블(위 배열)의 주소를 담기 위해
class Animal
{
	void* vtptr = animal_vtable;
	int age;
public:
	virtual void cry() {}
	virtual void run() {}
};

class Dog : public Animal
{
	void* vtptr = dog_vtable;
	int color;
public:
	void cry() override {}
};
//-------------------------------------------------------
// 오른쪽 그림이 교재 154 page그림입니다.
int main()
{
	Animal a1, a2;
	Dog d1;

	Animal* p = &d1;

	p->cry();	

	// p->vtptr[1](); // 라는 의미의 기계어 코드를 컴파일할때 생성
					  // 실행시 메모리있는 함수주소를 꺼내서
						// 호출하는것.
}

// 가상함수 사용시 오버헤드
// 
// 메모리 오버헤드
// 1. 클래스당 한개의 가상함수 테이블
//    => 가상함수 갯수가 많으면 주의!

// 2. 객체당 한개의 vtptr 추가

// 성능
// 1. 메모리에서 주소값을 꺼내서 호출
// => 일반적으로 최소 2번이상의 메모리 접근

// 2. 가상함수는 인라인 치환등을 사용할수 없다
// => 인라인 치환 은 "컴파일 시간"
// => 가상함수는 "실행시간"

// godbolt.org 에

// vtable1.cpp 코드 넣으세요
