#include <iostream>

// reinterpret_cast 
// => 서로 다른 타입의 주소를 캐스팅하는 용도로 사용
// => 용도외의 작업은 할수 없다.

int main()
{
	double d = 3.4;
	int    n =  d; 

//	double* p1 = static_cast<double*>(&n); // error
	double* p2 = reinterpret_cast<double*>(&n); // ok

	int n1 = reinterpret_cast<int>(3.4); // error
								// 캐스팅 없어도 에러 아닌 코드지만
								// reinterpret_cast 사용하면 오히려 에러
								// 용도에 맞지 않는다는 것
	
}

