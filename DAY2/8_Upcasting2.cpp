// 6_Upcasting1.cpp      140 page ~
#include <vector>

class Animal
{
public:	int age;
};
class Dog : public Animal
{
public:	int color;
};
class Cat : public Animal
{
public:	int speed;
};

// upcasting 활용 #1
// => 동종(동일 기반 클래스 사용하는 타입)을 처리하는 함수를 만들수 있다.

// 인자로 받은 객체를 한살 증가하는함수
//void new_year(Dog*  p)	// Dog 객체만 연산 가능한 함수
void new_year(Animal* p)	// 모든 동물 객체에 대한 연산이 가능한 함수
{
	++(p->age);
}

int main()
{
	// Upcasting 활용/장점 2.
//	std::vector<Dog*>    v1;	// Dog 만 보관 가능한 vector
	std::vector<Animal*> v2;	// 모든 동물 객체를 보관 가능한 vector
	

}
