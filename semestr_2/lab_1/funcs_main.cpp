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
