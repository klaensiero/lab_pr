#include "Power.h"
#include "PowerException.cpp"
using namespace std;

template<typename T>
T Power<T>::calculate(T base, int exponent) {

    PowerException::checkExponent(exponent);
    
    T result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}
