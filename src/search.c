#include "search.h"

SEARCH_t SEARCH_voidIntLinear(int *arr, int size, int *number, int *position)
{
    SEARCH_t search = NOT_FOUND;
    for (int counter = 0; counter < size; counter++)
    {
        if (arr[counter] == *number)
        {
            *position = counter;
            search = FOUND;
        }
    }
    return search;
}

SEARCH_t SEARCH_voidIntBinary(int *arr, int size, int *number, int *position)
{
    int first = 0, last = size - 1, middle;
    SEARCH_t search = NOT_FOUND;
    while (first <= last && search == NOT_FOUND)
    {
        middle = (last + first) / 2;
        if (arr[middle] == *number)
        {
            *position = middle;
            search = FOUND;
        }
        else if (arr[middle] > *number)
        {
            last = middle - 1;
        }
        else
        {
            first = middle + 1;
        }
    }
    return search;
}