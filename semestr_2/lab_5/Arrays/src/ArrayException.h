#include <stdexcept>

class ArrayException : public std::out_of_range {
public:
    explicit ArrayException(const char* msg = "Index out of range") : std::out_of_range(msg) {}
};
