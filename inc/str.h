/***************************************************************************/
/*   FILE NAME : str.h                                                     */
/*   AUTHOR    : MOHAMED MABROUK                                           */
/*   DATE      : 2 DEC 2023                                                */
/*                                                                         */
/*   PURPOSE   : Header file for the string manipulation library.          */
/***************************************************************************/

#ifndef _STR_H_
#define _STR_H_

// Enumeration to represent the status of string operations
typedef enum
{
    STR_NOK, // Not OK
    STR_OK   // OK
} STR_t;

typedef enum
{
    STR_SMALLER = -1,
    STR_EQUAL = 0,
    STR_BIGGER
} STRCMP_t;

/**
 * @brief Read a string from the standard input.
 *
 * @param str Pointer to the buffer where the string will be stored.
 */
void STR_voidScan(char *str);

/**
 * @brief Read a string of specified size from the standard input.
 *
 * @param str Pointer to the buffer where the string will be stored.
 * @param size Maximum size of the string to be read.
 */
void STR_voidScantoSize(char *str, int size);

/**
 * @brief Print a string to the standard output.
 *
 * @param str Pointer to the string to be printed.
 */
void STR_voidPrint(char *str);

/**
 * @brief Reverse a string in-place.
 *
 * @param str Pointer to the string to be reversed.
 */
void STR_voidStrReverse(char *str);

/**
 * @brief Convert an integer to a string.
 *
 * @param number The integer to be converted.
 * @param str Pointer to the buffer where the resulting string will be stored.
 */
void STR_voidIntToStr(int number, char *str);

/**
 * @brief Convert a string to an integer.
 *
 * @param str Pointer to the string to be converted.
 * @param number Pointer to the variable where the resulting integer will be stored.
 */
void STR_voidStrToInt(char *str, int *number);

/**
 * @brief Copy characters from a string to another without repeating.
 *
 * @param str Pointer to the source string.
 * @param strCopy Pointer to the destination string without repeating characters.
 */
void STR_voidCharCopyNoRepeat(char *str, char *strCopy);

/**
 * @brief Compare two strings.
 *
 * @param str1 Pointer to the first string.
 * @param str2 Pointer to the second string.
 * @return Status of the comparison (STR_OK if equal, STR_NOK if not equal).
 */
STR_t STR_voidCompare(char *str1, char *str2);

STRCMP_t STR_voidCompareSort(char *str1, char *str2);

/**
 * @brief Search for a string in an array of strings.
 *
 * @param array Array of strings to be searched.
 * @param size Size of the array.
 * @param position Pointer to the variable where the position of the found string will be stored.
 * @param str Pointer to the string to be searched.
 * @return Status of the search (STR_OK if found, STR_NOK if not found).
 */
STR_t STR_voidArraySearch(char **array, int size, int *position, char *str);

void STR_void2DPrint(char (*arr)[10], int rows, int cols);

#endif // _STR_H_
