#include <iostream>
#include <cstring>
#include "../header/product.h"

void ProductArray::add(const Product & product) {
	if (count >= allocated) {
		std::cout << "No more products are allowed!" << std::endl;
		return;
	}

	products[count++] = product;
}

Product * ProductArray::find(char * username) {
	for (unsigned int i = 0; i < this->count; ++i) {
		if (strcmp(username, products[i].name) == 0) {
			return & products[i];
		}
	}

	return nullptr;
}

ProductArray newProductArray(unsigned int allocatedSize) {
	ProductArray pa;
	
	pa.products = new Product[allocatedSize];
	pa.count = 0;
	pa.allocated = allocatedSize;

	return pa;
}

void deleteProductArray(ProductArray & pa) {
	delete[] pa.products;
	pa.products = nullptr;
	pa.count = pa.allocated = 0;
}
