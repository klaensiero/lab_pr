#include <stdexcept>

class ReadFromEmptyBuffer : public std::length_error {
public:
    explicit ReadFromEmptyBuffer(const char* msg = "Attempted to read from an empty buffer.") : std::length_error(msg) {}
};

class InvalidCapacity : public std::length_error {
public:
    explicit InvalidCapacity(const char* msg = "The capacity of a buffer is invalid.") : std::length_error(msg) {}
};

class OutOfRange : public std::out_of_range {
public:
    explicit OutOfRange(const char* msg = "The range of a buffer is broken.") : std::out_of_range(msg) {}
};
