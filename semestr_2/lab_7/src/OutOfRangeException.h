#include <stdexcept>

class OutOfRange : public std::out_of_range {
public:
    explicit OutOfRange(const char* msg) : std::out_of_range(msg) {}
};
