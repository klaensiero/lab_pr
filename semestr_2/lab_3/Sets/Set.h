#ifndef SUBSET_H
#define SUBSET_H

#include <bitset>

class Subset {
private:
    std::bitset<10> bits;

public:
    Subset();
    Subset(const std::initializer_list<int>& list);
    Subset operator+(const Subset& other) const;
    bool operator==(const Subset& other) const;
    bool operator!=(const Subset& other) const;
    bool operator+=(int n);
    bool operator-=(int n);
};

#endif
