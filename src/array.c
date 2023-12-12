#include <stdio.h>
#include <stdlib.h>
#include "array.h"

void ARRAY_voidIntScanHeap(int **arr)
{
    int size;
    printf("Please Enter Array Size:");
    scanf("%d", &size);
    *arr = (int *)malloc(size * sizeof(int));
    for (int counter = 0; counter < size; counter++)
    {
        printf("Element (%d):", counter);
        scanf("%d", *arr + counter);
    }
    printf("Please Don't Forget to Free\nThe Array After Finishing Using It.\n");
}

void ARRAY_voidIntPrint(int *arr, int size)
{
    for (int counter = 0; counter < size; counter++)
    {
        printf("%d  ", arr[counter]);
    }
    printf("\n");
}

void ARRAY_voidIntMostRepeatMono(int *arr, int size, int *pnum, int *counts)
{
    if (pnum == NULL)
    {
        return;
    }

    int min = arr[0], max = arr[0];
    *counts = 0;

    for (int counter = 1; counter < size; counter++)
    {
        if (arr[counter] < min)
        {
            min = arr[counter];
        }

        if (arr[counter] > max)
        {
            max = arr[counter];
        }
    }
    int freqSize = max - min + 1;
    int *freqArr = (int *)calloc(freqSize, sizeof(int));

    for (int counter = 0; counter < size; counter++)
    {
        freqArr[arr[counter] - min]++;
    }

    for (int counter = 0; counter < freqSize; counter++)
    {
        if (freqArr[counter] > *counts)
        {
            *counts = freqArr[counter];
            *pnum = counter + min;
        }
    }
}

void ARRAY_void2DPrint(int *arr, int rows, int cols)
{
    for (int counterRows = 0; counterRows < rows; counterRows++)
    {
        for (int counterCols = 0; counterCols < cols; counterCols++)
        {
            printf("%5d     ", *(arr + counterRows * cols + counterCols));
        }
        printf("\n");
    }
}

/*
void ARRAY_void2DPrint(int (*arr)[5], int rows, int cols)
{
    for (int counterRows = 0; counterRows < rows; counterRows++)
    {
        for (int counterCols = 0; counterCols < cols; counterCols++)
        {
            printf("%5d     ", arr[counterRows][counterCols]);
        }
        printf("\n");
    }
}
*/