#ifndef BINARY_SEARCH_H_
#define BINARY_SEARCH_H_

// searches an item in a sorted array and returns its index. -1 if not found
template <class T>
unsigned int binary_search(T arr[], unsigned int size, const T &item);

#include "binary_search.tcc"

#endif // BINARY_SEARCH_H_