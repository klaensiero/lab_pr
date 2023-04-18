#include "App.h"
using namespace std;

int App::start() {
    try {
        Power<int> intPower;
        int base = 2;
        int exponent = 5;
        int result = intPower.calculate(base, exponent);
        cout << base << " raised to the power of " << exponent << " is: " << result << "\n";
        
        Power<float> floatPower;
        float base2 = 1.5;
        int exponent2 = 3;
        float result2 = floatPower.calculate(base2, exponent2);
        cout << base2 << " raised to the power of " << exponent2 << " is: " << result2 << "\n";
    } catch (exception const &ex) {
        cerr << "Error: " << ex.what() << "\n";
        return 1;
    }
    
    return 0;
}
