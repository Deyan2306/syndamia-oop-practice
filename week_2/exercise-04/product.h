#ifndef __PRODUCT_H__
#define __PRODUCT_H__

static const unsigned int MAX_NAME_LENGTH = 256;

struct Product {
	unsigned int ID;
	char name[MAX_NAME_LENGTH];
	unsigned int stockSize;
};

#endif //!__PRODUCT_H__
