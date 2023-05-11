#include "Algorithms.h"

template<typename Iterator, typename Predicate>
bool my_none_of(Iterator first, Iterator last, Predicate pred) {
    return std::none_of(first, last, pred);
}

template<typename Iterator, typename Compare>
bool my_is_sorted(Iterator first, Iterator last, Compare comp) {
    return std::is_sorted(first, last, comp);
}


template<typename Iterator, typename T>
Iterator find_not(Iterator first, Iterator last, const T& value) {
    return std::find_if_not(first, last, [value](const auto& elem) { return elem == value; });
}

template<class T>
bool is_even(const T& value) {
    return value % 2 == 0;
}
