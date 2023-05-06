#include <stdexcept>

class ReadFromEmptyBuffer : public std::length_error {
public:
    explicit ReadFromEmptyBuffer(const char* msg) : std::length_error(msg) {}
};
