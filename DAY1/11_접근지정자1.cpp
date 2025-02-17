// 4_접근지정자1 - 76page~
#include <iostream>

struct Person
{
private:		// 이 영역에 있는 멤버는 외부에서는 접근할수 없고
				// 멤버 함수에서만 접근 가능합니다.
	int age;	
	int weight;

public:			// 이영역에 있는 모든 멤버는 외부에서도 접근 가능합니다
				// 주로, 멤버 함수를 이영역에 놓게 됩니다.
	void set_age(int a)
	{
		age = a;
	}
};

int main()
{
	Person p;

//	p.age = -10; // error. private 영역에 있으므로 멤버가 아닌 함수(main)에서는
				 //        접근할수 없다.
	p.set_age(-10);

				 
}
