#include "Power.h"
using namespace std;

template<typename T>
T Power<T>::calculate(T base, int exponent) {
    if (exponent < 0) {
        throw runtime_error("Exponent must be non-negative");
    }
    T result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}
