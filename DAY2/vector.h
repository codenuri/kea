// vector.h 
#pragma once

class vector
{
	int* ptr;
	int  sz;
public:
	vector(int size, int value);
	~vector();

	int& at(int idx);
	void resize(int new_size);
	int size();
	bool empty();
};