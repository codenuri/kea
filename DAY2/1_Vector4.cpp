#include <iostream>

class vector
{
	int* ptr;
	int  sz;

public:
	vector(int size, int value)
	{
		sz = size;
		ptr = new int[size];
		for (int i = 0; i < size; i++)
			ptr[i] = value;
	}

	~vector() { delete[] ptr; }

	int& at(int idx) { return ptr[idx]; }

	void resize(int new_size)
	{
		if (new_size > sz) // ũ�Ⱑ Ŀ���� ���
		{
			// #1. ��û�� ũ�� ��ŭ ���Ӱ� �޸� �Ҵ�
			int* tmp = new int[new_size];

			// #2. ���� ������ ������ ���ο� ����(�޸�)�� ����
			memcpy(tmp, ptr, sizeof(int) * sz);

				// => ptr �� "����Ű�� �޸�" ������
				// => tmp �� "����Ű�� �޸�" ��
				// => sizeof(int)* sz ��ŭ ����

			// #3. ���� ���� ����
			delete[] ptr;

			// #4. ��� ����Ÿ ptr �� ���ο� �޸𸮸� ����Ű����
			ptr = tmp;

			// #5. sz �������Ÿ ����
			sz = new_size;
		}
		else
		{
			// �۾����� ���� �����Ҷ� �غ�����..
			// �ּ��� ������ ���� ������ ������ - 3���� std::vector ��ﶧ ����
		}

	}
};






int main()
{
	vector v(5, 0);
	v.at(0) = 10;
	std::cout << v.at(0) << std::endl;


	v.resize(10); 
}