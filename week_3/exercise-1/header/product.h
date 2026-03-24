#ifndef __PRODUCT_H__
#define __PRODUCT_H__

struct Product {
	
	char name[256];
	unsigned int count;
	double price;

};

struct ProductArray {

	Product * products;
	unsigned int count;
	unsigned int allocated;
	
	void add(const Product & product);
	Product * find(char * name);
};

ProductArray newProductArray(unsigned int allocatedSize);
void deleteProductArray(ProductArray & pa);

#endif //!__PRODUCT_H__
