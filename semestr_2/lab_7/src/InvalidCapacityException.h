#include <stdexcept>

class InvalidCapacityException : public std::length_error {
public:
    explicit InvalidCapacityException(const char* msg) : std::length_error(msg) {}
};
