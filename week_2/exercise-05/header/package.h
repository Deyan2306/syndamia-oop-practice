#ifndef __PACKAGE_H__
#define __PACKAGE_H__

struct Package {
	char ID[11]; // +1 for terminating null
	double weight;
};

Package readPackage();

#endif //!__PACKAGE_H__
