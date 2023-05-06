#include "App.h"
#include <iostream>
using namespace std;

int App::start() {

    RingBuffer<int> buffer(5);
    cout << "Buffer is empty: " << buffer.isEmpty() << "\n";

    buffer.push_back(1);
    buffer.push_back(2);
    buffer.push_back(3);
    buffer.push_back(4);
    buffer.push_back(5);

    cout << "Buffer is full: " << buffer.isFull() << "\n";

    cout << "Buffer inside: ";

    for (int i = 0; i < buffer.getSize(); i++) {
        cout << buffer[i] << " ";
    }

    cout << "\n";

    buffer.pop_front();
    buffer.pop_front();
    buffer.push_front(0);
    buffer.push_front(-1);

    cout << "Buffer inside: ";
    for (int i = 0; i < buffer.getSize(); i++) {
        cout << buffer[i] << " ";
    }
    cout << "\n";

    buffer.insert(2, 2);
    cout << "Buffer inside: ";
    for (int i = 0; i < buffer.getSize(); i++) {
        cout << buffer[i] << " ";
    }
    cout << "\n";

    buffer.erase(4);
    cout << "Buffer inside: ";
    for (int i = 0; i < buffer.getSize(); i++) {
        cout << buffer[i] << " ";
    }
    cout << "\n";

    buffer.resize(6);
    cout << "Buffer inside: ";
    for (int i = 0; i < buffer.getSize(); i++) {
        cout << buffer[i] << " ";
    }
    cout << "\n";


    
    return 0;
}
