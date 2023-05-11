#include "PowerException.h"

void PowerException::checkExponent(int exponent) {
    if (exponent < 0) {
        throw std::runtime_error("Exponent must be non-negative");
    }
}
