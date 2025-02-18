#include <iostream>
#include <vector>

class People
{
	std::string name;
	int age;
public:
	People(const std::string& name, int age)
		: name{ name }, age{ age }
	{
	}
};

// �Ʒ� �ּ���� �غ�����
// 1. People �� ���� ��ӹ��� Student �� ����� ������
// 2. Student �� int id ��� ����Ÿ �߰��� ������
// 3. Student �� ������ �߰��� ������  <== �ٽ�
// 4. main ���� Student ��ü ������ ������

class Student : public People
{
	int id;
public:
	/*
	// �Ʒ� ó�� ����� ���� �Դϴ�.
	Student(int id) : id{ id }
	{
		// call People::People() <= �����Ϸ��� �̷��� �߰��ߴµ�
								//  People ���� ����Ʈ �����ڰ� �����ϴ�.
	}
	*/

	// �ذ�å : 
	// 1. �Ļ� Ŭ���� ���鶧 ��� Ŭ������ ����Ʈ �����ڰ� ���ٴ� ���� �˰� �־�� �մϴ�.
	// 2. ��� Ŭ���� ������ ��絵 ��Ȯ�� �˰� �־�� �մϴ�.
	// 3. �Ļ� Ŭ���� �����ڿ��� ��� Ŭ������ ��ȿ�� �����ڸ� ��������� ȣ���ؾ� �մϴ�.

	// �Ʒ� �ڵ带 �Ϻ��� ���� �ؾ� �մϴ�.
	Student(const std::string& name, int age, int id)
		: People{ name, age }, id{ id }
	{

	}
};

int main()
{
	Student s("kim", 20, 99);

	People p1("kim", 30); 
}













