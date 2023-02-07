#include <iostream>
using namespace std;
struct Point {
    int x;
    int y;
};

struct Complex_number {
    double real;
    double img;
};
void swap_ref (int &x, int &y);
void multiply_ref(Complex_number &x, double number);
void shift_ref(Point &c, int x, int y);
void trunc_ref(double& num);

void swap_ptr (int *x, int *y);
void shift_point(Point *c, int x, int y);
void multiply_point(Complex_number *x, double number);
void trunc_point(double* num);