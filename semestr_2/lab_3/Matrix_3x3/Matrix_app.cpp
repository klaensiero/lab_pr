#include "Matrix_app.h"

int App_matrix::start() {
        
        double m1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        double m2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
        double scalar = 2.0;

        Matrix matrix1(m1);
        Matrix matrix2(m2);
        Matrix matrix3 = matrix1 + matrix2;
        Matrix matrix4 = matrix1 - matrix2;
        Matrix matrix5 = matrix1 * matrix2;
        Matrix matrix6 = matrix1 * scalar;

        cout << "Matrix 1:" << endl;
        ShowMatrix::show(matrix1);
        cout << endl;

        cout << "Matrix 2:" << endl;
        ShowMatrix::show(matrix2);
        cout << endl;

        cout << "Matrix 1 + Matrix 2:" << endl;
        ShowMatrix::show(matrix3);
        cout << endl;

        cout << "Matrix 1 - Matrix 2:" << endl;
        ShowMatrix::show(matrix4);
        cout << endl;

        cout << "Matrix 1 * Matrix 2:" << endl;
        ShowMatrix::show(matrix5);
        cout << endl;

        cout << "Matrix 1 * " << scalar << ":" << endl;
        ShowMatrix::show(matrix6);
        cout << endl;

        cout << "Matrix 1 == Matrix 2: " << (matrix1 == matrix2) << endl;
        cout << "Matrix 1 > Matrix 2: " << (matrix1 > matrix2) << endl;
        cout << "Matrix 1 < Matrix 2: " << (matrix1 < matrix2) << endl;

        return 0;
}

