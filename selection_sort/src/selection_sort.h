#ifndef SELECTION_SORT_H_
#define SELECTION_SORT_H_

#include <string>
// sorts an array by Selection Sort methodology
template <class T>
void selection_sort(T arr[], unsigned int size);

template <class T>
std::string trace(T arr[], unsigned int size);

#include "selection_sort.tcc"

#endif // SELECTION_SORT_H_