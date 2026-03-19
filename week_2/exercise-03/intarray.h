#ifndef __INTARRAY_H__
#define __INTARRAY_H__

struct IntArray {
	unsigned size;
	int * elems;

	void deleteSelf();
	int sum();
};

IntArray newIntArray(unsigned size);
void deleteIntArray(IntArray & arr);

#endif //!__INTARRAY_H__ 
