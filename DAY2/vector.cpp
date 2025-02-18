// vector.cpp
#include <cstring>  // for memcpy
#include "vector.h"

vector::vector(int size, int value)
{
	sz = size;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
		ptr[i] = value;
}
vector::~vector() { delete[] ptr; }
int& vector::at(int idx) { return ptr[idx]; }
void vector::resize(int new_size)
{
	if (new_size > sz)
	{
		int* tmp = new int[new_size];

		memcpy(tmp, ptr, sizeof(int) * sz);
		delete[] ptr;
		ptr = tmp;
		sz = new_size;
	}
	else
	{
	}
}


int vector::size() { return sz; }

bool vector::empty() { return sz == 0; }