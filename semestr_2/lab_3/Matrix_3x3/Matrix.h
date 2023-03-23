#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

class Matrix {
public:
    Matrix();
    Matrix(double m[3][3]);
    Matrix operator+(const Matrix& other) const;
    Matrix operator-(const Matrix& other) const;
    Matrix operator*(const Matrix& other) const;
    Matrix operator*(double scalar) const;
    bool operator==(const Matrix& other) const;
    bool operator!=(const Matrix& other) const;
    bool operator>(const Matrix& other) const;
    bool operator<(const Matrix& other) const;

    double data[3][3];
};

#endif
