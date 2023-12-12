#ifndef _SEARCH_H_
#define _SEARCH_H_

/**
 * @brief Enumeration to represent the result of search operations.
 */
typedef enum
{
    NOT_FOUND = 0, /**< Not found */
    FOUND          /**< Found */
} SEARCH_t;

/**
 * @brief Search for an integer in an array using the Linear Search algorithm.
 *
 * @param arr Pointer to the array of integers.
 * @param size Size of the array.
 * @param number Pointer to the integer to search for.
 * @param position Pointer to store the position of the found number.
 * @return SEARCH_t Result of the search operation (FOUND or NOT_FOUND).
 */
SEARCH_t SEARCH_voidIntLinear(int *arr, int size, int *number, int *position);

/**
 * @brief Search for an integer in a sorted array using the Binary Search algorithm.
 *
 * @param arr Pointer to the sorted array of integers.
 * @param size Size of the array.
 * @param number Pointer to the integer to search for.
 * @param position Pointer to store the position of the found number.
 * @return SEARCH_t Result of the search operation (FOUND or NOT_FOUND).
 */
SEARCH_t SEARCH_voidIntBinary(int *arr, int size, int *number, int *position);

#endif // _SEARCH_H_
