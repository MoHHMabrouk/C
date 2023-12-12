#ifndef _ARRAY_H_
#define _ARRAY_H_

/**
 * @brief Scan an integer array from the heap.
 *
 * @param arr Pointer to the array (output).
 */
void ARRAY_voidIntScanHeap(int **arr);

/**
 * @brief Print an integer array.
 *
 * @param arr Pointer to the array.
 * @param size Size of the array.
 */
void ARRAY_voidIntPrint(int *arr, int size);

/**
 * @brief Find the most frequently occurring element in a monotonically increasing array.
 *
 * @param arr Pointer to the array.
 * @param size Size of the array.
 * @param pnum Pointer to store the most frequently occurring number (output).
 * @param counts Pointer to store the count of occurrences (output).
 */
void ARRAY_voidIntMostRepeatMono(int *arr, int size, int *pnum, int *counts);

void ARRAY_void2DPrint(int *arr, int rows, int cols);
#endif // _ARRAY_H_
