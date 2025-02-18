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

// 인자로 받은 객체를 한살 증가하는함수
void new_year(Dog* p)
{
	++(p->age);
}





int main()
{
	// Upcasting 활용/장점
	std::vector<Dog*> v1;
	

}
