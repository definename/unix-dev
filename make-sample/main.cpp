#include <iostream>
#include "util.h"

int main(int argc, char* argv[])
{
	int var = 0;
	for (int i = 0; i <= 2; ++i)
	{
		var = i;
		std::cout << var << std::endl;
	}

	std::cout << "DO MAKE!! " << Do() << std::endl;
	return 0;
}