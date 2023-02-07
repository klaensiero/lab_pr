#include "work1.h"
int main() {
    Complex_number comp = {2.0, 3.0};
    cout << "Комплексное число до умножения: " << comp.real << " + " << comp.img << "i" << "\n";
    multiply_point(&comp, 4.0);
    cout << "После умножения: " << comp.real << " + " << comp.img << "i" << "\n";
    cout << "\n";

    struct Point c1 = {3, 3};
    cout << "Первоначальные координаты окр-ти: \n";
    cout << "x = " << c1.x << "\n";
    cout << "y = " << c1.y << "\n";
    shift_ref(c1, 4, 4);
    cout << "Координаты центра после сдвига (" << c1.x << ", " << c1.y << ")" << "\n";
    cout << "\n";

    double n = 7.98981;
    trunc_ref(n);
    cout << "Число без остатка: " << n << "\n";
    cout << "\n";

    int x, y;
    cout << "Введи 2 переменные:" << "\n";
    cin >> x >> y;
    swap_ptr(&x, &y);
    cout << "x = " << x << " y = " << y << "\n";
    return 0;
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
void multiply_point(Complex_number *x, double y) {
    x->real *= y;
    x->img *= y;
}
void trunc_point(double* num) {
     *num = int(*num);
}
void shift_point(Point *c, double x, double y) {
    c->x += x;
    c->y += y;
}
void trunc_ref(double& num) {
     num = int(num);
}
void shift_ref(Point &c, int x, int y) {
    c.x += x;
    c.y += y;
}
void multiply_ref(Complex_number &x, double y) {
    x.real *= y;
    x.img *= y;
}