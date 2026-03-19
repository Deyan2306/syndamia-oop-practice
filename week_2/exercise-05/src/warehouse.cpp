#include "../header/warehouse.h"

bool Warehouse::storePackage(const Package & package) {
	if (this->storedPackages >= this->packageCapacity)
		return false;

	packages[storedPackages++] = package;
	return true;
}
