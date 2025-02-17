int main()
{
	const int c = 10;

	// c의 주소를 double* 에 담고 싶습니다.
	double* p1 = (double*)&c; // C 스타일 은 이렇게만 하면 됩니다

	// C++ 캐스팅으로 위 캐스팅해 보세요
	double* p2 = ? &c;
}





