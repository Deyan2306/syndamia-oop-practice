#include "matrix.h"

// Създава нова динамично-заделена матрица
int ** newMatrix(unsigned rows, unsigned cols) {
	int ** matrix = new int * [rows];
	for (int i = 0; i < rows; i++) {
		matrix[i] = new int[cols];
	}

	return matrix;
}

// Изтрива динамично-заделена матрица
void deleteMatrix(int **& matrix, unsigned rows) {
	
	for (int i = 0; i < rows; i++)
		delete[] matrix[i];

	delete[] matrix;
	matrix = nullptr;
}

// Връща сумата на всички елементи в матрицата
int sumMatrix(const int ** matrix, unsigned rows, unsigned cols) {
	
	int totalSum = 0;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			totalSum += matrix[i][j];
		}
	}

	return totalSum;
}
