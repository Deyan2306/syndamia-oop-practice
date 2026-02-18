#ifndef __MATRIX_DATA__
#define __MATRIX_DATA__

#include "matrix.h"

class MatrixData {
	
	private: 
		int rows;
		int cols;
		int ** matrix;

	public:

		void readMatrix();
		const int sum();

		MatrixData(int _rows, int _cols) 
			: rows(_rows), cols(_cols) {};
		
		~MatrixData() {
			deleteMatrix(this->matrix, this->rows);
		}
};

#endif //!__MATRIX_DATA__
