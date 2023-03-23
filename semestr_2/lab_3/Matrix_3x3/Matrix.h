#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>

class Matrix {
public:
    Matrix();
    Matrix(std::vector<std::vector<double>> m);
    Matrix operator+(const Matrix& other) const;
    Matrix operator-(const Matrix& other) const;
    Matrix operator*(const Matrix& other) const;
    Matrix operator*(double scalar) const;
    bool operator==(const Matrix& other) const;
    bool operator!=(const Matrix& other) const;
    bool operator>(const Matrix& other) const;
    bool operator<(const Matrix& other) const;

    std::vector<std::vector<double>> data;
};

#endif
