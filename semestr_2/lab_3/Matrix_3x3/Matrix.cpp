// #include "Matrix.h"

// Matrix::Matrix() {
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             data[i][j] = 0;
//         }
//     }
// }

// Matrix::Matrix(double m[3][3]) {
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             data[i][j] = m[i][j];
//         }
//     }
// }

// Matrix Matrix::operator+(const Matrix& other) const {
//     Matrix result;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             result.data[i][j] = data[i][j] + other.data[i][j];
//         }
//     }
//     return result;
// }

// Matrix Matrix::operator-(const Matrix& other) const {
//     Matrix result;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             result.data[i][j] = data[i][j] - other.data[i][j];
//         }
//     }
//     return result;
// }

// Matrix Matrix::operator*(const Matrix& other) const {
//     Matrix result;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             double sum = 0;
//             for (int k = 0; k < 3; k++) {
//                 sum += data[i][k] * other.data[k][j];
//             }
//             result.data[i][j] = sum;
//         }
//     }
//     return result;
// }

// Matrix Matrix::operator*(double scalar) const {
//     Matrix result;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             result.data[i][j] = data[i][j] * scalar;
//         }
//     }
//     return result;
// }

// bool Matrix::operator==(const Matrix& other) const {
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             if (data[i][j] != other.data[i][j]) {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// bool Matrix::operator>(const Matrix& other) const {
//     double sum1 = 0, sum2 = 0;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             sum1 += data[i][j] * data[i][j];
//             sum2 += other.data[i][j] * other.data[i][j];
//         }
//     }
//     return sum1 > sum2;
// }

// bool Matrix::operator<(const Matrix& other) const {
//     double sum1 = 0, sum2 = 0;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             sum1 += data[i][j] * data[i][j];
//             sum2 += other.data[i][j] * other.data[i][j];
//         }
//     }
//     return sum1 < sum2;
// }


#include "Matrix.h"

Matrix::Matrix() {
    data.resize(3, std::vector<double>(3, 0));
}

Matrix::Matrix(std::vector<std::vector<double>> m) {
    data = m;
}

Matrix Matrix::operator+(const Matrix& other) const {
    Matrix result;
    result.data.resize(3, std::vector<double>(3, 0));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result.data[i][j] = data[i][j] + other.data[i][j];
        }
    }
    return result;
}

Matrix Matrix::operator-(const Matrix& other) const {
    Matrix result;
    result.data.resize(3, std::vector<double>(3, 0));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result.data[i][j] = data[i][j] - other.data[i][j];
        }
    }
    return result;
}

Matrix Matrix::operator*(const Matrix& other) const {
    Matrix result;
    result.data.resize(3, std::vector<double>(3, 0));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            double sum = 0;
            for (int k = 0; k < 3; k++) {
                sum += data[i][k] * other.data[k][j];
            }
            result.data[i][j] = sum;
        }
    }
    return result;
}

Matrix Matrix::operator*(double scalar) const {
    Matrix result;
    result.data.resize(3, std::vector<double>(3, 0));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result.data[i][j] = data[i][j] * scalar;
        }
    }
    return result;
}

bool Matrix::operator==(const Matrix& other) const {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (data[i][j] != other.data[i][j]) {
                return false;
            }
        }
    }
    return true;
}

bool Matrix::operator!=(const Matrix& other) const {
    return !(*this == other);
}

bool Matrix::operator>(const Matrix& other) const {
    double sum1 = 0, sum2 = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum1 += data[i][j] * data[i][j];
            sum2 += other.data[i][j] * other.data[i][j];
        }
    }
    return sum1 > sum2;
}

bool Matrix::operator<(const Matrix& other) const {
    double sum1 = 0, sum2 = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum1 += data[i][j] * data[i][j];
            sum2 += other.data[i][j] * other.data[i][j];
        }
    }
    return sum1 < sum2;
}