#include <iostream>
#include "complex_numbers.h"
using namespace std;

int main() {

    ComplexNumber comp = {2.0, 3.0};
    cout << "Комплексное число до умножения: " << comp.real_part << " + " << comp.img_part << "i" << "\n";
    multiply_point(&comp, 4.0);
    cout << "После умножения: " << comp.real_part << " + " << comp.img_part << "i" << "\n";
    cout << "\n";

    ComplexNumber c3(5, 4);
    ComplexNumber c4(2, 3);
    c3.multiply(c4);
    cout << "Результат перемножения 2-х комплексных чисел: " << c3.real_part <<" + i"<< c3.img_part << "\n";

}

void ComplexNumber::multiply(ComplexNumber &comp2) {
      this->real_part = (this->real_part * comp2.real_part) - (this->img_part * comp2.img_part);
      this->img_part = (this->real_part * comp2.img_part) + (this->img_part * comp2.real_part);
}

void multiply_point(ComplexNumber *x, double y) {
    x->real_part *= y;
    x->img_part *= y;
}

void multiply_ref(ComplexNumber &x, double y) {
    x.real_part *= y;
    x.img_part *= y;
}
