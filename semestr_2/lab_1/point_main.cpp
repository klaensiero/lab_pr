#include <iostream>
#include "point.h"
using namespace std;

int main() {

    struct Point c1 = {3, 3};
    cout << "Первоначальные координаты окр-ти: \n";
    cout << "x = " << c1.x << "\n";
    cout << "y = " << c1.y << "\n";
    shift_ref(c1, 4, 4);
    cout << "Координаты центра после сдвига (" << c1.x << ", " << c1.y << ")" << "\n";
    cout << "\n";

}
