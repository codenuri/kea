int main()
{
	const int c = 10;

	// c의 주소를 double* 에 담고 싶습니다.
	double* p1 = (double*)&c; // C 스타일 은 이렇게만 하면 됩니다

	
	// C++ 캐스팅으로 위 캐스팅해 보세요
//	double* p2 = static_cast<double*>(&c); // error
//	double* p2 = reinterpret_cast<double*>(&c); // error. 상수성제거안됨
//	double* p2 = const_cast<double*>(&c); // error. 타입이 다르다.

	double* p2 = reinterpret_cast<double*>(const_cast<int*>(&c));
				// 1. const int* => int* 로 먼저 변경하고
				// 2. int* => double* 로 변경한것
				
	// 위와 같은 캐스팅이 실전에 나오는 경우는 드물지만
	// 학습을 위한 코드.. 

}





