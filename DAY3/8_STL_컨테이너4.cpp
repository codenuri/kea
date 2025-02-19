// 5_STL_�����̳�4
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	std::list<int>   s = { 1,2,3,4,5 };

	// 1. ���ſ� ��ȯ�� ���ÿ� �ϴ� ��� �Լ��� �����ϴ�.
	// => ���� ������ �����̳ʸ� �����Ϸ��� ����/��ȯ�� ���ÿ� �Ҽ� ���ٴ�
	//     �̷��� �ֽ��ϴ�. 
	// => "���� �������� ���º���(exception safety)" �� ã�� ������

	int n = v.back(); // ������ �ϳ� ���.. ���Ŵ� �ȵ�.
	v.pop_back();     // ���Ÿ�, ��ȯ���� void

	std::cout << n << std::endl;




	// 2. �����̳ʰ� �����̳ʸ� �����ϸ� ���� ���� "�ڷᱸ��"�� ����� �ֽ��ϴ�.
	// "�ڷᱸ��(data structure)" : ����Ÿ�� ��� ������ ���ΰ� ? �� �ٷ�� �о�

	std::vector< std::list<int> > v2(10);

	v2[0].push_back(1);
	v2[0].push_back(2);
	v2[0].push_back(3);

	v2[1].push_back(10);
	v2[1].push_back(20);
}

// �����̳�(Container ) : �������� ��Ҹ� �����ϴ� Ŭ����
//						list, vector, deque ��
//						�ٸ� ������ collection �̶�� �մϴ�.