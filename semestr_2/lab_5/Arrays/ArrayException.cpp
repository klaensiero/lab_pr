#include "ArrayException.h"

void ArrayException::checkIndex(int index, int N) {
    if (index < 0 || index >= N) {
        throw std::out_of_range("Index out of range");
    }
}
