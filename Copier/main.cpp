#include "Copier.h"
#include <iostream>

int main()
{
	Copier copier(350, 1200, 25, 50);

	copier.makeCopy(5);
	std::cout << "\n";

	copier.turnOn();
	std::cout << "\n";

	copier.makeCopy(5);
	std::cout << "\n";

	copier.turnOff();
}