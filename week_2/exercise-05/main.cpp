#include <iostream>
#include "header/package.h"
#include "header/warehouse.h"

int main(void) {
	unsigned int warehouseCount;
	std::cin >> warehouseCount;

	Warehouse * warehouses = new Warehouse[warehouseCount];

	for (unsigned int i = 0; i < warehouseCount; ++i) {
		std::cin >> warehouses[i].ID >> warehouses[i].packageCapacity;
		warehouses[i].packages = new Package[warehouses[i].packageCapacity];
	}

	unsigned int packagesCount;

	std::cin >>packagesCount;
	std::cin.ignore();
	
	for (unsigned int i = 0; i < packagesCount; ++i) {
		Package package = readPackage();

		char warehouse;
		std::cin >> warehouse;
		std::cin.ignore();

		for (unsigned int i = 0; i < warehouseCount; ++i) {
			if (warehouses[i].ID == warehouse) {
				warehouses[i].storePackage(package);
				break;
			}
		}
	}

	for (unsigned int i = 0; i < warehouseCount; ++i) {
		std::cout << warehouses[i].ID << ' ' << warehouses[i].storedPackages << '/' << warehouses[i].packageCapacity << std::endl;
		for (unsigned int j = 0; j < warehouses[i].storedPackages; ++j) {
			std::cout << warehouses[i].packages[j].ID << std::endl;
		}
	}

	for (unsigned int i = 0; i < warehouseCount; ++i) {
		delete[] warehouses[i].packages;
	}
	delete[] warehouses;

	return 0;
}
