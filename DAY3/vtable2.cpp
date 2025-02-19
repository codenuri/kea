// �����Ϸ��� Ŭ������ �����Լ��� ������ �Ʒ� �� ���� �ڵ带 �߰� �մϴ�. 

// #1. ��� �����Լ��� �ּҸ� ��� �迭(��������)�� ����ϴ�.
void* animal_vtable[3] = { Animal_TYPE_INFO, &Animal::cry, &Animal::run };
void* dog_vtable[3]    = { Dog_TYPE_INFO,    &Dog::cry,    &Animal::run };


// #2. �����Լ��� ���� ��� Ŭ�������� �ڵ����� ��� ����Ÿ�� �Ѱ� �߰��ȴ�
// => �����Լ� ���̺�(�� �迭)�� �ּҸ� ��� ����
class Animal
{
	void* vtptr = animal_vtable;
	int age;
public:
	virtual void cry() {}
	virtual void run() {}
};

class Dog : public Animal
{
	void* vtptr = dog_vtable;
	int color;
public:
	void cry() override {}
};
//-------------------------------------------------------
int main()
{
	Animal a1, a2;
	Dog d1;

	Animal* p = &d1;

	p->cry();	
}
