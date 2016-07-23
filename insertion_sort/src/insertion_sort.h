#ifndef INSERTION_SORT_H_
#define INSERTION_SORT_H_

#include <string>
// sorts an array by Insertion Sort methodology
template <class T>
void insertion_sort(T arr[], unsigned int size);

template <class T>
std::string trace(T arr[], unsigned int size);

#include "insertion_sort.tcc"

#endif // INSERTION_SORT_H_