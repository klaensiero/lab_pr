#include "MatrixOutput.h"

void ShowMatrix::show(const Matrix& matrix) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix.data[i][j] << " ";
        }
        cout << "\n";
    }
}
