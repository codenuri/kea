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
int main()
{
	Animal a1, a2;
	Dog d1;

	Animal* p = &d1;

	p->cry();	
}
