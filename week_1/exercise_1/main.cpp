#include <iostream>
#include "matrix_data.h"

int main(void) {

	int rows_1;
	int cols_1;

	int rows_2;
	int cols_2;

	std::cin >> rows_1 >> cols_1;
	std::cin >> rows_2 >> cols_2;

	MatrixData matrix_1(rows_1, cols_1);
	MatrixData matrix_2(rows_2, cols_2);
	
	matrix_1.readMatrix();
	matrix_2.readMatrix();

	std::cout << (matrix_1.sum() - matrix_2.sum()) << std::endl;

	return 0;
}
