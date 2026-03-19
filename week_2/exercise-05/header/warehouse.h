#ifndef __WAREHOUSE_H__
#define __WAREHOUSE_H__

#include "package.h"

struct Warehouse {
	char ID;
	Package * packages;

	unsigned int storedPackages;
	unsigned int packageCapacity;

	bool storePackage(const Package & package);

};

#endif //!__WAREHOUSE_H__
