#include "Test.h"



Test::Test()
{
}


Test::~Test()
{
}


void Test::checkKeyPress(std::vector<int> _myVector) {
	bool quit = false;
	std::cout << "Press z to remove an int from the vector.\n";

	while (!quit) {
		SDL_Event event;

		while (SDL_PollEvent(&event)) {
			switch (event.type) {

			case SDL_KEYDOWN:
				switch (event.key.keysym.sym) {
				case SDLK_z:
					_myVector.pop_back();
					std::cout << "myVector contains:\n";
					for (unsigned i = 0; i < _myVector.size(); i++) {
						std::cout << _myVector[i];
						std::cout << "\n";
					}
					break;

				case SDLK_ESCAPE:
					quit = true;
					break;
				}
				break;

			default:
				break;
			}
		}
	}
}