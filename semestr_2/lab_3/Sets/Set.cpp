#include "Set.h"

Subset::Subset() {}

Subset::Subset(const std::initializer_list<int>& list) {
    for (int n : list) {
        bits.set(n);
    }
}

Subset Subset::operator+(const Subset& other) const {
    Subset result;
    result.bits = bits | other.bits;
    return result;
}

bool Subset::operator==(const Subset& other) const {
    return bits == other.bits;
}

bool Subset::operator!=(const Subset& other) const {
    return bits != other.bits;
}

bool Subset::operator+=(int n) {
    if (n >= 0 && n <= 9) {
        bits.set(n);
        return true;
    }
    return false;
}

bool Subset::operator-=(int n) {
    if (n >= 0 && n <= 9) {
        bits.reset(n);
        return true;
    }
    return false;
}
