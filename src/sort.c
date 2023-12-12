#include "sort.h"
#include "utils.h"
#include <str.h>
#include <stdio.h>
#include <stdlib.h>

void SORT_voidIntBubble(int *arr, int size)
{
    SORT_t sortingFlag = NOK;
    for (int counter1 = 0; counter1 < size && sortingFlag == NOK; counter1++)
    {
        sortingFlag = OK;
        for (int counter2 = 0; counter2 < size - 1 - counter1; counter2++)
        {
            if (arr[counter2] > arr[counter2 + 1])
            {
                SWAP_voidInts(&arr[counter2], &arr[counter2 + 1]);
                sortingFlag = NOK;
            }
        }
    }
}

void SORT_voidIntSelection(int *arr, int size)
{
    int max = 0, last = size - 1;
    for (int counter1 = 0; counter1 < size; counter1++)
    {
        max = 0;
        for (int counter2 = 0; counter2 < last; counter2++)
        {
            if (arr[counter2] > arr[max])
            {
                max = counter2;
            }
        }
        if (max != last)
        {
            SWAP_voidInts(&arr[max], &arr[last]);
        }
        last--;
    }
}

void SORT_voidIntCount(int *arr, int size)
{
    int min = arr[0], max = arr[0];

    for (int counter = 0; counter < size; counter++)
    {
        if (arr[counter] > max)
        {
            max = arr[counter];
        }
        if (arr[counter] < min)
        {
            min = arr[counter];
        }
    }

    int freqArrSize = max - min + 1;

    int *freqArr = (int *)calloc(freqArrSize, sizeof(int));

    for (int counter = 0; counter < size; counter++)
    {
        freqArr[arr[counter] - min]++;
    }
    for (int elementCounter = 0, freqArrCounter = 0, originialArrCounter = 0; originialArrCounter < size;)
    {
        if (elementCounter < freqArr[freqArrCounter])
        {
            arr[originialArrCounter] = freqArrCounter + min;
            originialArrCounter++;
            elementCounter++;
        }
        else
        {
            elementCounter = 0;
            freqArrCounter++;
        }
    }
}

void SORT_voidArrayOfPointersToChars(char **arr, int size)
{
    SORT_t sortingFlag = NOK;
    for (int counter1 = 0; counter1 < size && sortingFlag == NOK; counter1++)
    {
        sortingFlag = OK;
        for (int counter2 = 0; counter2 < size - 1 - counter1; counter2++)
        {
            if (STR_voidCompareSort(arr[counter2], arr[counter2 + 1]) == STR_SMALLER)
            {
                SWAP_voidPointers(&arr[counter2], &arr[counter2 + 1]);
                sortingFlag = NOK;
            }
        }
    }
}