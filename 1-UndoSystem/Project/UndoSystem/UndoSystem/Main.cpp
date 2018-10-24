/*
	Miranda Dorosz
	Game Programming 5 Assignment 2
	Undo System
*/

#include <iostream>
#include <vector>
#include "Test.h"

int main(int argc, char* args[]) {

	/*
		SDL poll events to get keys
		start with just inputting numbers, user enters sequence of numbers, it prints, they hit undo key # of times and it reprints without those numbers

		Vector<std::function> v //vector array
		v.push_back(bind())
	*/

	std::vector<int> myVector;
	int sum = 0;
	int myInt;
	bool quit = false;

	std::cout << "Input 5 ints\n";

		for (int i = 0; i < 5; i++) {
			std::cin >> myInt;
			myVector.push_back(myInt);
			sum += myVector.back();
		}

	std::cout << "The elements of myvector add up to " << sum << ".\n";

	std::cout << "myVector contains:\n";
	for (unsigned i = 0; i < myVector.size(); i++) {
		std::cout << myVector[i];
		std::cout << "\n";
	}

	Test* test = new Test();

	test->checkKeyPress(myVector);

	system("pause");
	return 0;
}

