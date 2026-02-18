#include <iostream>
#include "matrix_data.h"

const int MatrixData::sum() {
	return sumMatrix((const int**) matrix, rows, cols);
}

void MatrixData::readMatrix() {

	int ** matrix = newMatrix(this->rows, this->cols);

	for (int i = 0; i < this->rows; i++) {
		for (int j = 0; j < this->cols; j++) {
			std::cin >> matrix[i][j];
		}
	}

	this->matrix = matrix;
}
