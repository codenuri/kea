// 5_�ݺ���1
#include <iostream>
#include <vector>
#include <list>

int main()
{
//	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };

	// �ݺ���(iterator)�� ?
	// => �����̳��� ��Ҹ� ����Ű�� ������ ��Ȱ�� ��ü
	// => ������ ������ ����� ������� Ÿ��(Ŭ����)

//	auto p1 = s.begin(); // p1�� ��¥ �����Ͱ� �ƴϰ� 
						 // ��ü �Դϴ�
//	++p1;	// p1.operator++() �Լ� ȣ��ǰ�
			// �Լ� �ȿ��� ���� ��Ҹ� ����Ű���� �ڵ尡 ���������


	// ------------------------------------------
//	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };


	// 1. �ݺ����� ��Ȯ�� Ÿ��
	// => "�����̳��̸�<Ÿ��>::iterator" �Դϴ�. iterator �� using alias �Դϴ�
	// => �׷���, �Ʒ� ó�� ���� ������� ������. auto ����ϼ���.
	// => �̸��� �Ʒ�ó�� ����ϸ� �����̳� �����, �Ʒ� �ڵ� ����˴ϴ�.
//	std::list<int>::iterator p1 = s.begin();

	auto p1 = s.begin();
	
}



/*
namespace std
{
	template<typename T>
	class list_iterator
	{
		// linked list �� ��Ҹ� ����Ű�鼭 ������ ó�� �����ϰ� ���� Ÿ��
		// operator++(), operator*()

		// �ݺ����� �̸��� ����ڰ� �ܿ� �ʿ� ���� ����.!!!
		// => �׷��� �� Ŭ���� �̸��� �����Ϸ����� �ٸ��ϴ�.
	};

	template<typename T>
	class list
	{
	public:
		// �����̳� �����ڰ� "��ӵ� ����"���� �ڽ��� �ݺ��� Ÿ���� ����.. 
		using iterator = list_iterator<T>;
	};

}*/