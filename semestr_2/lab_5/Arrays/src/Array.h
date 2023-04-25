#include <stdexcept>

template <int N, class T>
class Array {
private:
    T elements[N];

public:
    Array();
    T& operator[](int index);
};
