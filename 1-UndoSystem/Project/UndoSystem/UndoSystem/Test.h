#ifndef TEST_H
#define TEST_H


#include <iostream>
#include <vector>
#include <SDL.h>
class Test
{
public:
	Test();
	~Test();

	void checkKeyPress(std::vector<int> _myVector);
};

#endif

