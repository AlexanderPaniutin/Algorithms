#ifndef MERGE_SORT_H_
#error Please inlcude .h instead of .tcc
#endif

#include <sstream>

// forward declaration
template <class T>
void merge_sort_helper(T arr[], T arrEx[], unsigned int ndxStart, unsigned int ndxEnd);

template <class T>
void merge_sorted_helper(T arr[], T arrEx[], unsigned int ndxStart, unsigned int ndxMiddle, unsigned int ndxEnd);

template <class T>
void merge_sort(T arr[], unsigned int size)
{
    if (arr == NULL || size == 0)
      return;

    T *arrEx = new T[size];
    merge_sort_helper(arr, arrEx, 0, size-1);
    delete[] arrEx;

}

template <class T>
void merge_sort_helper(T arr[], T arrEx[], unsigned int ndxStart, unsigned int ndxEnd)
{
    // if its a single item range - its sorted
    if (ndxStart >= ndxEnd)
        return;

    unsigned int ndxMiddle = (ndxEnd - ndxStart)/2 + ndxStart;
    merge_sort_helper(arr, arrEx, ndxStart, ndxMiddle);
    merge_sort_helper(arr, arrEx, ndxMiddle+1, ndxEnd);
    merge_sorted_helper(arr, arrEx, ndxStart, ndxMiddle, ndxEnd);
}

template <class T>
void merge_sorted_helper(T arr[], T arrEx[], unsigned int ndxStart, unsigned int ndxMiddle, unsigned int ndxEnd)
{
    // copy full range into extra buffer
    //memcpy(arrEx + ndxStart, arr + ndxStart, ndxEnd - ndxStart + 1);
    // use memcpy here
    for (unsigned int i=ndxStart; i<=ndxEnd; ++i)
    {
        arrEx[i] = arr[i];
    }

    // to simplify logic and variables
    unsigned int ndxStart1 = ndxStart;
    unsigned int ndxEnd1   = ndxMiddle;
    unsigned int ndxStart2 = ndxMiddle+1;
    unsigned int ndxEnd2   = ndxEnd;
    unsigned int ndxSorted = ndxStart;

    // merge while both arrays have items
    while (ndxStart1 <= ndxEnd1 && ndxStart2 <= ndxEnd2)
    {
        if (arrEx[ndxStart1] < arrEx[ndxStart2])
        {
            arr[ndxSorted] = arrEx[ndxStart1];
            ++ndxStart1;
        }
        else
        {
            arr[ndxSorted] = arrEx[ndxStart2];
            ++ndxStart2;
        }
        ++ndxSorted;
    }

    // check if 1 partition is not merged
    while (ndxStart1 <= ndxEnd1)
    {
        arr[ndxSorted] = arrEx[ndxStart1];
        ++ndxSorted;
        ++ndxStart1;
    }

    // second partition is already in place
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