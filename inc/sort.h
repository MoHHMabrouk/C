#ifndef _SORT_H_
#define _SORT_H_

/**
 * @brief Enumeration to represent the status of sorting operations.
 */
typedef enum
{
    NOK = 0, /**< Not OK */
    OK       /**< OK */
} SORT_t;

/**
 * @brief Sort an array of integers using the Bubble Sort algorithm.
 *
 * @param arr Pointer to the array of integers.
 * @param size Size of the array.
 */
void SORT_voidIntBubble(int *arr, int size);

/**
 * @brief Sort an array of integers using the Selection Sort algorithm.
 *
 * @param arr Pointer to the array of integers.
 * @param size Size of the array.
 */
void SORT_voidIntSelection(int *arr, int size);

/**
 * @brief Sort an array of integers using the Counting Sort algorithm.
 *
 * @param arr Pointer to the array of integers.
 * @param size Size of the array.
 */
void SORT_voidIntCount(int *arr, int size);

/**
 * @brief Print a 2D array of strings.
 *
 * @param str Pointer to the 2D array of strings.
 * @param size Size of the array.
 */

void SORT_voidArrayOfPointersToChars(char **arr, int size);

#endif // _SORT_H_
