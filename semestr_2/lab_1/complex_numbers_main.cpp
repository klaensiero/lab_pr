#include <iostream>
#include "complex_numbers.h"
using namespace std;

int main() {

    Complex_number comp = {2.0, 3.0};
    cout << "Комплексное число до умножения: " << comp.real << " + " << comp.img << "i" << "\n";
    multiply_point(&comp, 4.0);
    cout << "После умножения: " << comp.real << " + " << comp.img << "i" << "\n";
    cout << "\n";

    ComplexNumber c3(5, 4);
    ComplexNumber c4(2, 3);
    c3.multiply(c4);
    cout << "Результат перемножения 2-х комплексных чисел: " << c3.real_part <<" + i"<< c3.img_part << "\n";

}
