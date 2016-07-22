#ifndef SELECTION_SORT_H_
#error Please inlcude .h instead of .tcc
#endif

#include <sstream>

// forward declaration
template <class T>
unsigned int find_min(T arr[], unsigned int ndxStart, unsigned int ndxEnd)
{
    unsigned int ndxMin = ndxStart;
    for (unsigned int i=ndxStart; i<=ndxEnd; ++i)
    {
        if (arr[i] < arr[ndxMin])
            ndxMin = i;
    }

    return ndxMin;
}

template <class T>
void selection_sort(T arr[], unsigned int size)
{
    if (arr == NULL || size < 2)
      return;

    unsigned int ndxSorted = 0;
    unsigned int ndxEnd = size-1;
    while (ndxSorted < ndxEnd)
    {
        unsigned int ndxMin = find_min<T>(arr, ndxSorted, ndxEnd);

        // swap max and sorted
        T tmp = arr[ndxSorted];
        arr[ndxSorted] = arr[ndxMin];
        arr[ndxMin] = tmp;

        ++ndxSorted;
    }
}

template <class T>
std::string trace(T arr[], unsigned int size)
{
    std::stringstream strm;

    for (unsigned int i=0; i<size; ++i)
    {
        if (i != 0)
            strm << ',';
        strm << arr[i];
    }

    return strm.str();
}
