// 04_�Լ�1-1.cpp

// ����Ʈ �Ķ���� ���� ���� #1.
// => ������ ���ں��� ���ʴ�θ� ���� �����ϴ�.
void f1(int a, int b,     int c = 0) {} // ok
void f2(int a, int b = 0, int c = 0) {} // ok

void f3(int a = 0, int b, int c = 0) {} // error

void f4(int a, int b = 0, int c) {} // error
//-------------------------------------------

// ���� ���� 2.
// => �Լ��� ����� �������� �и��ô� ���� ǥ��
void f5(int a, int b, int c = 0);

void f5(int a, int b, int c = 0)
{

}

