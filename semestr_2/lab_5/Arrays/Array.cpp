#include "Array.h"

template <int N, class T>
Array<N, T>::Array() {

    for (int i = 0; i < N; i++) {
        elements[i] = T();
    }
}

template <int N, class T>

T& Array<N, T>::operator[](int index) {
    if (index < 0 || index >= N) {
        throw std::out_of_range("Index out of range");
    }
    return elements[index];
}
