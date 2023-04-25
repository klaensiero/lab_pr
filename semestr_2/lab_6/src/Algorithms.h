#include <algorithm>

template<typename Iterator, typename Predicate>
bool my_none_of(Iterator first, Iterator last, Predicate pred);


template<typename Iterator, typename Compare>
bool my_is_sorted(Iterator first, Iterator last, Compare comp);

template<typename Iterator, typename T>
Iterator find_not(Iterator first, Iterator last, const T& value);

template<class T>
bool is_even(const T& value);
