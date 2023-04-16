#include "AppMatrix.h"

int App_matrix::start() {

    vector<vector<double>> m1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<double>> m2 = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    double scalar = 2.0;

    Matrix matrix1(m1);
    Matrix matrix2(m2);
    Matrix matrix3 = matrix1 + matrix2;
    Matrix matrix4 = matrix1 - matrix2;
    Matrix matrix5 = matrix1 * matrix2;
    Matrix matrix6 = matrix1 * scalar;

    cout << "Matrix 1:" << "\n";
    ShowMatrix::show(matrix1);
    cout << "\n";

    cout << "Matrix 2:" << "\n";
    ShowMatrix::show(matrix2);
    cout << "\n";

    cout << "Matrix 1 + Matrix 2:" << "\n";
    ShowMatrix::show(matrix3);
    cout << "\n";

    cout << "Matrix 1 - Matrix 2:" << "\n";
    ShowMatrix::show(matrix4);
    cout << "\n";

    cout << "Matrix 1 * Matrix 2:" << "\n";
    ShowMatrix::show(matrix5);
    cout << "\n";

    cout << "Matrix 1 * " << scalar << ":" << "\n";
    ShowMatrix::show(matrix6);
    cout << "\n";

    cout << "Matrix 1 == Matrix 2: " << (matrix1 == matrix2) << "\n";
    cout << "Matrix 1 > Matrix 2: " << (matrix1 > matrix2) << "\n";
    cout << "Matrix 1 < Matrix 2: " << (matrix1 < matrix2) << "\n";

    return 0;

}

