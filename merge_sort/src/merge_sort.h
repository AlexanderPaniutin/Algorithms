#ifndef MERGE_SORT_H_
#define MERGE_SORT_H_

#include <string>
// sorts an array by Merge Sort methodology
template <class T>
void merge_sort(T arr[], unsigned int size);

template <class T>
std::string trace(T arr[], unsigned int size);

#include "merge_sort.tcc"

#endif // MERGE_SORT_H_