#include <iostream>
#include "../header/package.h"

Package readPackage() {

	Package package;
	std::cin.getline(package.ID, 11);
	std::cin.clear();
	std::cin >> package.weight;

	return package;
}
