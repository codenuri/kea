#include <iostream>

int main()
{
	int cnt = 0;

//	int score[cnt]; // �����Ϸ��� ���� �ٸ��� �ִ� �ڵ�

	// �� ������ �ذ�å�� 2���� ����� �ֽ��ϴ�.
	
	// #1. ����� ū ũ���� �迭 ���. �Ӻ���� ȯ�濡�� �ַ� ���
	int score[100];

	// #2. ���� �޸� �Ҵ�
	int* score = (int*)malloc(sizeof(int) * cnt);
	free(score);
}

