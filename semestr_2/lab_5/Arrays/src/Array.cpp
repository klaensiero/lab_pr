#include "Array.h"
#include "ArrayException.cpp"

template <int N, class T>
Array<N, T>::Array() {

    for (int i = 0; i < N; i++) {
        elements[i] = T();
    }
}

template <int N, class T>

T& Array<N, T>::operator[](int index) {

    ArrayException::checkIndex(index, N);

    return elements[index];
}
