#ifndef INSERTION_SORT_H_
#error Please inlcude .h instead of .tcc
#endif

#include <sstream>


// further declaration of helping functions
// searches for a spot in a sorted section where the new item should be placed
template <class T>
unsigned int find_spot(T arr[], unsigned int ndxStart, unsigned int ndxEnd, const T &item);

// shifts all the items right giving the available spot for a new item
// NOTE: last item will be replaced by its left neighbor. first and second items will be same
template <class T>
void shift_right(T arr[], unsigned int ndxStart, unsigned int ndxEnd);

template <class T>
void insertion_sort(T arr[], unsigned int size)
{
    if (arr == NULL || size < 2)
      return;

    unsigned int ndxUnsorted = 1;

    while (ndxUnsorted < size)
    {
        // remember item that needs to be inserted
        T item = arr[ndxUnsorted];
        unsigned int ndxSpot = find_spot(arr, 0, ndxUnsorted, item);
        shift_right(arr, ndxSpot, ndxUnsorted);
        arr[ndxSpot] = item;

        ++ndxUnsorted;
    }

}

template <class T>
unsigned int find_spot(T arr[], unsigned int ndxStart, unsigned int ndxEnd, const T &item)
{
    unsigned int ndxSpot = ndxStart;
    while (ndxSpot < ndxEnd)
    {
        if (arr[ndxSpot] > item)
            break;
        ++ndxSpot;
    }

    return ndxSpot;
}

// shifts all the items right giving the available spot for a new item
template <class T>
void shift_right(T arr[], unsigned int ndxStart, unsigned int ndxEnd)
{
    unsigned int ndxCurr = ndxEnd;
    while (ndxCurr > ndxStart)
    {
        arr[ndxCurr] = arr[ndxCurr-1];
        --ndxCurr;
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
