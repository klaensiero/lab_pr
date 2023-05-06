#include "Buffer.h"

template<typename T>

RingBuffer<T>::RingBuffer(int capacity) : capacity(capacity), size(0), start(0), buffer(new T[capacity]) {}

template<typename T>
RingBuffer<T>::~RingBuffer() {
    delete[] buffer;
}

template<typename T>
int RingBuffer<T>::getSize() const {
    return size;
}

template<typename T>
int RingBuffer<T>::getCapacity() const {
    return capacity;
}

template<typename T>
bool RingBuffer<T>::isEmpty() const {
    return size == 0;
}

template<typename T>
bool RingBuffer<T>::isFull() const {
    return size == capacity;
}

template<typename T>
void RingBuffer<T>::clear() {
    size = 0;
    start = 0;
}

template<typename T>
void RingBuffer<T>::push_back(const T& value) {
    if (isFull()) {
        erase(0);
    }
    int end = (start + size) % capacity;
    buffer[end] = value;
    size++;
}

template<typename T>
void RingBuffer<T>::pop_back() {
    if (isEmpty()) {
        throw ReadFromEmptyBuffer("Attempted to read from an empty buffer.");
    }
    size--;
}

template<typename T>
void RingBuffer<T>::push_front(const T& value) {
    if (isFull()) {
        erase(size - 1);
    }
    start = (start - 1 + capacity) % capacity;
    buffer[start] = value;
    size++;
}

template<typename T>
void RingBuffer<T>::pop_front() {
    if (isEmpty()) {
        throw ReadFromEmptyBuffer("Attempted to read from an empty buffer.");
    }
    start = (start + 1) % capacity;
    size--;
}

template<typename T>
void RingBuffer<T>::insert(const T& value, int index) {
    if (index < 0 || index > size) {
        throw OutOfRange("The range of a buffer is broken.");
    }
    if (isFull()) {
        erase(0);
    }
    int position = (start + index) % capacity;
    for (int i = start + size - 1; i >= position; i--) {
        buffer[(i + 1) % capacity] = buffer[i % capacity];
    }
    buffer[position] = value;
    size++;
}

template<typename T>
void RingBuffer<T>::erase(int index) {
    if (index < 0 || index >= size) {
        throw OutOfRange("The range of a buffer is broken.");
    }
    int position = (start + index) % capacity;
    for (int i = position; i < start + size - 1; i++) {
        buffer[i % capacity] = buffer[(i + 1) % capacity];
    }
    size--;
}

template<typename T>
T& RingBuffer<T>::operator[](int index) {
    return buffer[(start + index) % capacity];
}

template<typename T>
T& RingBuffer<T>::front() {
    return buffer[start];
}

template<typename T>
T& RingBuffer<T>::back() {
    return buffer[(start + size - 1) % capacity];
}

template<typename T>
void RingBuffer<T>::resize(int newCapacity) {
    if (newCapacity <= 0) {
        throw InvalidCapacityException("The size of a buffer is invalid.");
    }

    if (newCapacity < size) {
        throw InvalidCapacityException("Attempted to overflow a buffer.");
    }
    
    T* newBuffer = new T[newCapacity];
    int copySize = (newCapacity < size) ? newCapacity : size;
    for (int i = 0; i < copySize; i++) {
        newBuffer[i] = buffer[(start + i) % capacity];
    }
    capacity = newCapacity;
    size = copySize;
    start = 0;
    delete[] buffer;
    buffer = newBuffer;
}
