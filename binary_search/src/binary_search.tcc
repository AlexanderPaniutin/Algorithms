#ifndef BINARY_SEARCH_H_
#error Please inlcude .h instead of .tcc
#endif

// forward declaration
template <class T>
unsigned int binary_search_helper(T arr[], const T &item, unsigned int ndxStart, unsigned int ndxEnd);

template <class T>
unsigned int binary_search(T arr[], unsigned int size, const T &item)
{
    if (arr == NULL || size == 0)
      return -1;

    return binary_search_helper(arr, item, 0, size-1);

}

template <class T>
unsigned int binary_search_helper(T arr[], const T &item, unsigned int ndxStart, unsigned int ndxEnd)
{
    // check if indexes received are valid
    if (ndxStart > ndxEnd)
        return -1;

    while (ndxStart != ndxEnd)
    {
        unsigned int ndxMiddle = (ndxEnd - ndxStart)/2 + ndxStart;

        if (arr[ndxMiddle] > item)
            ndxEnd = ndxMiddle;
        else if (arr[ndxMiddle] < item)
            ndxStart = ndxMiddle + 1;
        else
            return ndxMiddle;
    }

    // here ndxStart should be == ndxEnd
    if (arr[ndxStart] == item)
        return ndxStart;
    else
        return -1;
}