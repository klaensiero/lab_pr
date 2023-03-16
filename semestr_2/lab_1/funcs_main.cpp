#include <iostream>
#include "funcs.h"
using namespace std;

int main() {

    double n = 7.98981;
    trunc_ref(n);
    cout << "Число без остатка: " << n << "\n";
    cout << "\n";
    int x, y;
    cout << "Введи 2 переменные:" << "\n";
    cin >> x >> y;
    swap_ptr(&x, &y);
    cout << "x = " << x << " y = " << y << "\n";

}

void swap_ptr (int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap_ref (int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void trunc_point(double* num) {
     *num = int(*num);
}

void trunc_ref(double& num) {
     num = int(num);
}
