// 1. github.com/codenuri/kea  ����  DAY2.zip �����ø� �˴ϴ�.
// 2. ���� Ǯ�� visual studio ���� open �ϼ���
// 3. 0_reference_return.cpp   �߰��� ������

int x = 3;

// �Ʒ� 2���� �Լ��� ������ ���ô�.
int  f1() { return x; }
int& f2() { return x; }

int main()
{
	f1() = 10;
	f2() = 10;
}